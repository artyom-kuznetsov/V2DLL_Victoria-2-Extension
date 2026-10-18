// FUN_005698b0 @ 005698b0 body=[[005698b0, 00569918]]


void FUN_005698b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_ESI;
  undefined8 uVar3;
  
  FUN_00401000(0x42c90000);
  iVar1 = FUN_00b31c00();
  iVar1 = __alldiv((longlong)(*(int *)(param_1 + 0x344) * 1000) * (longlong)iVar1,1000,0);
  uVar3 = __allmul(iVar1 + 1000,iVar1 + 1000 >> 0x1f,0x1e848,0);
  uVar2 = __alldiv(uVar3,1000,0);
  *unaff_ESI = uVar2;
  return;
}

