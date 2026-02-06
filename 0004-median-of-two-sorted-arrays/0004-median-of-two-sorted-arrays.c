double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    // *nums1=(int *)malloc(nums1Size*sizeof(int));
    // *nums2=(int *)malloc(nums2Size*sizeof(int));
    int m=nums1Size;
    int n=nums2Size;
    int *arr=(int *)malloc((m+n)*sizeof(int));
    int i=0,j=0,k=0;
    while(i<m && j<n)
    {
        if(nums1[i] <= nums2[j])
        {
            arr[k++]=nums1[i++];
        }
        else
        {
            arr[k++]=nums2[j++];
        }
    }
    while(i<m)
    {
        arr[k++]=nums1[i++];
    }
    while(j<n)
    {
        arr[k++]=nums2[j++];
    }
    if((m+n)%2==0)
    {
        return (arr[(m+n)/2]+arr[((m+n)/2)-1])/2.0;
    }
    else return arr[(m+n)/2];
}