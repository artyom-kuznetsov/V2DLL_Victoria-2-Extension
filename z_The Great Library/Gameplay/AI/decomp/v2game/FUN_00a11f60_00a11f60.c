// FUN_00a11f60 @ 00a11f60 body=[[00a11f60, 00a1208c] [00a12090, 00a120d2]]


void FUN_00a11f60(int *param_1)

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
    iVar8 = (param_1[1] - *param_1) / 0x50 + iVar6;
    uVar7 = iVar8 - iVar6;
    if (iVar8 == iVar6) {
      FUN_00a12120(in_EAX,&param_1,*in_EAX,in_EAX[1]);
      return;
    }
    iVar6 = *in_EAX;
    uVar2 = (in_EAX[1] - iVar6) / 0x50;
    if (uVar7 <= uVar2) {
      puVar5 = (undefined4 *)FUN_00a12ba0(param_1[1],param_1);
      puVar1 = (undefined4 *)in_EAX[1];
      for (; puVar5 != puVar1; puVar5 = puVar5 + 0x14) {
        (**(code **)*puVar5)(0);
      }
      in_EAX[1] = ((param_1[1] - *param_1) / 0x50) * 0x50 + *in_EAX;
      return;
    }
    if (uVar7 <= (uint)((in_EAX[2] - iVar6) / 0x50)) {
      FUN_00a12ba0(uVar2 * 0x50 + *param_1,param_1);
      iVar6 = FUN_00a12c20(param_1[1],in_EAX[1],param_1);
      in_EAX[1] = iVar6;
      return;
    }
    if (iVar6 != 0) {
      FUN_007a9050();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_EAX);
    }
    cVar4 = FUN_00a120e0();
    if (cVar4 != '\0') {
      iVar6 = FUN_00a12c20(piVar3[1],*in_EAX,param_1);
      in_EAX[1] = iVar6;
    }
  }
  return;
}

