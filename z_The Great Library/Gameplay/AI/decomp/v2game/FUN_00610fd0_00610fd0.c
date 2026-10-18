// FUN_00610fd0 @ 00610fd0 body=[[00610fd0, 006110b2]]


void FUN_00610fd0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *in_ECX;
  uint *puVar8;
  uint *puVar9;
  
  puVar6 = in_ECX;
  if (in_ECX != param_1) {
    while (puVar7 = puVar6 + 6, puVar7 != param_1) {
      uVar1 = *puVar7;
      uVar2 = puVar6[8];
      uVar3 = puVar6[10];
      puVar8 = puVar6 + 8;
      uVar4 = puVar6[0xb];
      uVar5 = puVar6[9];
      puVar6 = puVar7;
      if (((int)uVar5 < (int)in_ECX[3]) || (((int)uVar5 <= (int)in_ECX[3] && (uVar2 <= in_ECX[2]))))
      {
        while( true ) {
          puVar9 = puVar8 + -6;
          if (((int)uVar5 < (int)puVar8[-5]) ||
             (((int)uVar5 <= (int)puVar8[-5] && (uVar2 <= *puVar9)))) break;
          *puVar7 = puVar8[-8];
          puVar7[2] = *puVar9;
          puVar7[3] = puVar8[-5];
          puVar7[4] = puVar8[-4];
          puVar7[5] = puVar8[-3];
          puVar7 = puVar8 + -8;
          puVar8 = puVar9;
        }
        *puVar7 = uVar1;
        puVar7[2] = uVar2;
        puVar7[3] = uVar5;
        puVar7[4] = uVar3;
        puVar7[5] = uVar4;
      }
      else {
        FUN_00612670();
        *in_ECX = uVar1;
        in_ECX[2] = uVar2;
        in_ECX[3] = uVar5;
        in_ECX[4] = uVar3;
        in_ECX[5] = uVar4;
      }
    }
  }
  return;
}

