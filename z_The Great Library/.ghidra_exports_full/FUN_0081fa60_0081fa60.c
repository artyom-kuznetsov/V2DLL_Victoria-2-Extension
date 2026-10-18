// FUN_0081fa60 @ 0081fa60 body=[[0081fa60, 0081fafb]]


bool FUN_0081fa60(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  
  iVar6 = *(int *)(in_ECX + 0x238);
  iVar1 = *(int *)(in_ECX + 0x230);
  iVar2 = *(int *)(in_ECX + 0x234);
  iVar3 = *(int *)(in_ECX + 0xb4);
  iVar5 = *(int *)(in_EAX + 0xb4);
  iVar4 = __alldiv((longlong)(*(int *)(in_EAX + 0x234) + *(int *)(in_EAX + 0x230)) *
                   (longlong)*(int *)(in_EAX + 0x238),1000,0);
  iVar5 = __alldiv((longlong)iVar4 * (longlong)iVar5,1000,0);
  iVar6 = __alldiv((longlong)(iVar2 + iVar1) * (longlong)iVar6,1000,0);
  iVar6 = __alldiv((longlong)iVar6 * (longlong)iVar3,1000,0);
  return iVar6 < iVar5;
}

