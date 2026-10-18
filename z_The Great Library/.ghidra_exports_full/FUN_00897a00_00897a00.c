// FUN_00897a00 @ 00897a00 body=[[00897a00, 00897a6a]]


void FUN_00897a00(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_ESI;
  undefined8 uVar4;
  
  piVar1 = (int *)FUN_00538150();
  uVar4 = __allmul(*piVar1,*piVar1 >> 0x1f,0x591c8,0);
  iVar2 = __alldiv(uVar4,1000,0);
  uVar3 = __alldiv((longlong)*(int *)(param_1 + 0x20) * (longlong)iVar2,1000,0);
  *unaff_ESI = uVar3;
  return;
}

