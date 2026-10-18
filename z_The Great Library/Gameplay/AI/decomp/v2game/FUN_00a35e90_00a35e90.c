// FUN_00a35e90 @ 00a35e90 body=[[00a35e90, 00a35fd9] [00a35fdd, 00a36023]]


void FUN_00a35e90(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  char cVar4;
  int *in_EAX;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  piVar3 = param_1;
  if (in_EAX != param_1) {
    iVar6 = param_1[1] - *param_1 >> 0x1f;
    iVar8 = (param_1[1] - *param_1) / 0x38 + iVar6;
    uVar7 = iVar8 - iVar6;
    if (iVar8 == iVar6) {
      FUN_00a360f0(in_EAX,&param_1,*in_EAX,in_EAX[1]);
      return;
    }
    iVar6 = *in_EAX;
    uVar2 = (in_EAX[1] - iVar6) / 0x38;
    if (uVar7 <= uVar2) {
      puVar5 = (undefined4 *)FUN_00a36a00(param_1[1],param_1);
      puVar1 = (undefined4 *)in_EAX[1];
      for (; puVar5 != puVar1; puVar5 = puVar5 + 0xe) {
        (**(code **)*puVar5)(0);
      }
      in_EAX[1] = *in_EAX + ((param_1[1] - *param_1) / 0x38) * 0x38;
      return;
    }
    if (uVar7 <= (uint)((in_EAX[2] - iVar6) / 0x38)) {
      FUN_00a36a00(*param_1 + uVar2 * 0x38,param_1);
      iVar6 = FUN_00a37070(param_1[1],in_EAX[1],param_1);
      in_EAX[1] = iVar6;
      return;
    }
    if (iVar6 != 0) {
      FUN_00a36080();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_EAX);
    }
    cVar4 = FUN_00a36030();
    if (cVar4 != '\0') {
      iVar6 = FUN_00a37070(piVar3[1],*in_EAX,param_1);
      in_EAX[1] = iVar6;
    }
  }
  return;
}

