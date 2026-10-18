// FUN_006111f0 @ 006111f0 body=[[006111f0, 006112bc]]


void FUN_006111f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *in_EDX;
  
  puVar5 = in_EDX;
  if (in_EDX != param_1) {
    while (puVar6 = puVar5 + 4, puVar6 != param_1) {
      uVar2 = *puVar6;
      uVar3 = puVar5[6];
      puVar1 = puVar5 + 6;
      iVar4 = puVar5[7];
      puVar5 = puVar6;
      if ((iVar4 < (int)in_EDX[3]) || ((iVar4 <= (int)in_EDX[3] && (uVar3 <= (uint)in_EDX[2])))) {
        while( true ) {
          if ((iVar4 < (int)puVar6[-1]) ||
             ((iVar4 <= (int)puVar6[-1] && (uVar3 <= (uint)puVar6[-2])))) break;
          *puVar6 = puVar6[-4];
          puVar6[2] = puVar6[-2];
          puVar6[3] = puVar6[-1];
          puVar6 = puVar6 + -4;
        }
        *puVar6 = uVar2;
        puVar6[2] = uVar3;
        puVar6[3] = iVar4;
      }
      else {
        while (in_EDX != puVar6) {
          puVar1[-2] = puVar1[-6];
          *puVar1 = puVar1[-4];
          puVar1[1] = puVar1[-3];
          puVar6 = puVar1 + -6;
          puVar1 = puVar1 + -4;
        }
        *in_EDX = uVar2;
        in_EDX[2] = uVar3;
        in_EDX[3] = iVar4;
      }
    }
  }
  return;
}

