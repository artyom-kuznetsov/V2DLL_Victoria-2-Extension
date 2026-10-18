// FUN_00511e70 @ 00511e70 body=[[00511e70, 00511ee7]]


uint FUN_00511e70(undefined4 param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int unaff_EDI;
  
  puVar2 = *(uint **)(param_2 + 0x134);
  if (puVar2 == *(uint **)(param_2 + 300)) {
    uVar3 = *(uint *)(unaff_EDI + 0xe78);
    iVar1 = *(int *)(unaff_EDI + 0xe7c);
    puVar2 = (uint *)FUN_004da790(param_1,unaff_EDI,unaff_EDI + 0x1184);
    if (((int)puVar2[1] < iVar1) || (((int)puVar2[1] <= iVar1 && (*puVar2 <= uVar3)))) {
      uVar3 = FUN_00511ef0(unaff_EDI,param_2,0,0,0,0,0);
      return uVar3;
    }
  }
  return (uint)puVar2 & 0xffffff00;
}

