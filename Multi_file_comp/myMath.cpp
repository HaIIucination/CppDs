long factorial(int n)
{
  if(n<=0)
    return 1;
  int ans = 1;
  for (int i = 1;i<=n;i++){
    ans*=i;
  }
  return ans;
}
