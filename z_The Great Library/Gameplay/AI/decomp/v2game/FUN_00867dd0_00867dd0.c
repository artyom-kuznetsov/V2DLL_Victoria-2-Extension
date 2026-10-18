// FUN_00867dd0 @ 00867dd0 body=[[00867dd0, 00867ec0]]


void FUN_00867dd0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  if ((int)param_2 < 0) {
    param_2 = 0;
  }
  if (*(uint *)(param_1 + 0x30) <= param_2) {
    param_2 = *(uint *)(param_1 + 0x30) - 1;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x3c) = 0;
  if (-1 < iVar1) {
    FUN_0099e240(iVar1);
    FUN_00868600(iVar1);
    FUN_008673e0();
  }
  if (param_3 == 0) {
    FUN_008680e0();
  }
  else if (param_3 == 1) {
    FUN_00868140();
  }
  else {
    FUN_008681a0();
  }
  uVar2 = param_2;
  FUN_0099e240(param_2);
  FUN_00868600(uVar2);
  FUN_008672f0();
  *(uint *)(param_1 + 0x38) = param_2;
  return;
}

