class Solution(object):
    def mergeSimilarItems(self, items1, items2):
        items = items1 + items2
        n = defaultdict(int)

        for i in range(len(items)):
            n[items[i][0]] += items[i][1]
        return sorted(n.items())
                    