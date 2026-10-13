class Solution:
    def minimumRecolors(self, blocks: str, k: int) -> int:
        curr = blocks[:k].count('W')
        res = curr

        for r in range(k, len(blocks)):
            if blocks[r] == 'W':
                curr += 1
            if blocks[r - k] == 'W':
                curr -= 1

            res = min(res, curr)

        return res