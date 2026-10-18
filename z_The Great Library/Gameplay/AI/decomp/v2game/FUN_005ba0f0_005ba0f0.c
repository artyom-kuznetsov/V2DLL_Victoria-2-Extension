// FUN_005ba0f0 @ 005ba0f0 body=[[005ba0f0, 005ba166]]


void FUN_005ba0f0(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *in_ECX;
  uint uVar3;
  int *piVar4;
  
  param_4 = param_4 >> 1;
  uVar3 = param_3 + param_4;
  if (param_2 < uVar3) {
    piVar4 = in_ECX + 1;
    uVar3 = param_3;
  }
  else {
    piVar4 = in_ECX + 2;
  }
  if (param_4 == 1) {
    puVar2 = (undefined4 *)FUN_00aae9af(0xc);
    if (puVar2 == (undefined4 *)0x0) {
      *piVar4 = 0;
    }
    else {
      *puVar2 = param_1;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *piVar4 = (int)puVar2;
    }
  }
  else {
    FUN_005ba0f0(param_1,param_2,uVar3,param_4);
  }
  iVar1 = *(int *)*piVar4;
  if (*(int *)(iVar1 + 4) < *(int *)(*in_ECX + 4)) {
    *(int *)*piVar4 = *in_ECX;
    *in_ECX = iVar1;
  }
  return;
}

