class Queue
{
private:
    struct Block
    {
        int front;
        int rear;
        int capacity;
        int *p;
    };
    Block *a;

public:
    Queue(int n)
    {
        a = new Block;
        a->capacity = n;
        a->front = -1;
        a->rear = -1;
        a->p = new int[n];
    }
    bool isEmpty()
    {
        return (a->front == -1);
    }
    void inQueue(int v)
    {
        a->rear = (a->rear + 1) % a->capacity;
        a->p[a->rear] = v;

        if (a->front == -1)
            a->front = a->rear;
    }
    int deQueue()
    {
        if (isEmpty())
            return -1;
        int v = a->p[a->front];
        if (a->front == a->rear)
        {
            a->front = -1;
            a->rear = -1;
        }
        else
            a->front = (a->front + 1) % a->capacity;
        return v;
    }
};

class Graph
{
private:
    int V;
    int E;
    vector<vector<int>> adj;

public:
    Graph(int num, vector<vector<int>> &pre)
    {
        V = num;
        E = pre.size();

        for (int i = 0; i < V; i++)
        {
            adj.push_back(vector<int>(V, 0));
        }

        for (int i = 0; i < pre.size(); i++)
            adj[pre[i][1]][pre[i][0]] = 1;
    }

    int inDgree(int ver)
    {
        int i, count = 0;

        for (i = 0; i < V; i++)
        {
            if (adj[i][ver] != 0)
                count++;
        }

        return count;
    }

    bool topologicalSort()
    {
        Queue Q(V);
        vector<int> ind(V);

        int i, j, count = 0;

        for (i = 0; i < V; i++)
        {
            ind[i] = inDgree(i);

            if (ind[i] == 0)
                Q.inQueue(i);
        }

        while (!Q.isEmpty())
        {
            j = Q.deQueue();
            count++;

            for (i = 0; i < V; i++)
            {
                if (adj[j][i] != 0)
                {
                    ind[i]--;

                    if (ind[i] == 0)
                        Q.inQueue(i);
                }
            }
        }
        if (count != V)
            return false;

        return true;
    }
};

class Solution
{
public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        Graph G(numCourses, prerequisites);

        if (G.topologicalSort())
            return true;
        else
            return false;
    }
};