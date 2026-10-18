// FUN_00816010 @ 00816010 body=[[00816010, 00816024]]


void FUN_00816010(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_EAX;
  undefined4 *in_EDX;
  
  iVar1 = in_EDX[4];
  iVar2 = in_EDX[3];
  uVar3 = *in_EDX;
  in_EAX[1] = 0;
  *in_EAX = uVar3;
  in_EAX[2] = iVar1 + iVar2;
  return;
}

