// FUN_005ba170 @ 005ba170 body=[[005ba170, 005ba1a0] [005ba1b3, 005ba1c3]]


void FUN_005ba170(uint param_1,uint param_2,uint param_3)

{
  int in_ECX;
  undefined4 *puVar1;
  uint uVar2;
  
  param_3 = param_3 >> 1;
  uVar2 = param_2 + param_3;
  if (param_1 < uVar2) {
    puVar1 = (undefined4 *)(in_ECX + 4);
    uVar2 = param_2;
  }
  else {
    puVar1 = (undefined4 *)(in_ECX + 8);
  }
  if (param_3 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*puVar1);
  }
  FUN_005ba170(param_1,uVar2,param_3);
  return;
}

