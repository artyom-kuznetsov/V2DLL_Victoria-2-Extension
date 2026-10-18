// FUN_005968d0 @ 005968d0 body=[[005968d0, 00596970]]


int * FUN_005968d0(int *param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar1 = DAT_01258a94;
  if (*(uint *)(unaff_ESI + 0x34) < 0x1269) {
    iVar1 = DAT_01258a98;
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_009c1d40();
  }
  *(int *)(unaff_ESI + 0x30) = iVar1;
  iVar2 = *(int *)(*(int *)(in_EAX + 0x1c) + 0x10);
  if (in_EAX == iVar2) {
    iVar2 = *(int *)(*(int *)(in_EAX + 0x1c) + 0x14);
  }
  *param_1 = *(int *)(unaff_ESI + 0x58);
  if (((iVar2 != 0) && (iVar1 != 0)) && (iVar1 = FUN_00598ed0(iVar1), iVar1 != 0)) {
    *param_1 = *param_1 + *(int *)(iVar1 + 0x58);
  }
  if (-1 < *param_1) {
    if (2000 < *param_1) {
      *param_1 = 2000;
    }
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}

