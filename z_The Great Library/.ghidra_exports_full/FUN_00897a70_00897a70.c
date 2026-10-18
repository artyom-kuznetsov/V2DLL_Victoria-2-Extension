// FUN_00897a70 @ 00897a70 body=[[00897a70, 00897b4a]]


void FUN_00897a70(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  undefined8 uVar3;
  
  piVar1 = (int *)FUN_00538150();
  uVar3 = __allmul(*piVar1,*piVar1 >> 0x1f,0x591c8,0);
  iVar2 = __alldiv(uVar3,1000,0);
  iVar2 = __alldiv((longlong)iVar2 * (longlong)*(int *)(in_ECX + 0x20),1000,0);
  FUN_005366f0(iVar2 + *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) +
                               0xe3c));
  FUN_00507770();
  return;
}

