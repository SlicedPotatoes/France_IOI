nbParticipant = int(input())
nums = [0] * nbParticipant
for i in range(nbParticipant):
    nums[i] = int(input())
nums.sort()
for i in range(int(nbParticipant/2)):
    print(nums[i], nums[nbParticipant-1-i], sep=" ")