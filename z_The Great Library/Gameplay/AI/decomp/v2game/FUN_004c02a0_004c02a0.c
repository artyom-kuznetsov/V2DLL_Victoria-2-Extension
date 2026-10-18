// FUN_004c02a0 @ 004c02a0 body=[[004c02a0, 004c0375] [004c0379, 004c03b1]]


int * FUN_004c02a0(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_1 != param_2) {
    iVar5 = *param_2;
    uVar7 = param_2[1] - iVar5 >> 4;
    if (uVar7 == 0) {
      FUN_004c0450(param_1,&param_2,*param_1,param_1[1]);
      return param_1;
    }
    iVar1 = *param_1;
    uVar6 = param_1[1] - iVar1 >> 4;
    if (uVar7 <= uVar6) {
      puVar4 = (undefined4 *)FUN_004c0bc0();
      puVar2 = (undefined4 *)param_1[1];
      for (; puVar4 != puVar2; puVar4 = puVar4 + 4) {
        (**(code **)*puVar4)(0);
      }
      param_1[1] = (param_2[1] - *param_2 & 0xfffffff0U) + *param_1;
      return param_1;
    }
    if (uVar7 <= (uint)(param_1[2] - iVar1 >> 4)) {
      FUN_004c0bc0();
      iVar5 = FUN_004c0f60(iVar5 + uVar6 * 0x10,param_2);
      param_1[1] = iVar5;
      return param_1;
    }
    if (iVar1 != 0) {
      FUN_004a3cd0();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*param_1);
    }
    cVar3 = FUN_00419ba0();
    if (cVar3 != '\0') {
      iVar5 = FUN_004c0f60(*param_2,param_2);
      param_1[1] = iVar5;
    }
  }
  return param_1;
}

