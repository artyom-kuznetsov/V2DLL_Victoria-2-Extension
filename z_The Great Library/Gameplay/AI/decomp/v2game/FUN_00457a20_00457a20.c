// FUN_00457a20 @ 00457a20 body=[[00457a20, 00457af2]]


undefined4 FUN_00457a20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_EAX;
  int iVar4;
  int iVar5;
  
  iVar1 = (*in_EAX + -43800000) / 0x18;
  iVar2 = (*(int *)(param_1 + 0x38) + -43800000) / 0x18;
  iVar4 = (int)((double)iVar1 / 365.0);
  iVar5 = (int)((double)iVar2 / 365.0);
  iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0xd4) / 1000;
  return CONCAT31((int3)((uint)iVar3 >> 8),
                  iVar3 <= ((((int)((float)iVar4 * -365.0) - (int)((float)iVar5 * -365.0)) +
                            (iVar4 - iVar5) * 0x16d) - iVar2) + iVar1);
}

