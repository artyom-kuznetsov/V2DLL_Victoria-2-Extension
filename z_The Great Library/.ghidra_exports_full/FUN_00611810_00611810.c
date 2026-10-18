// FUN_00611810 @ 00611810 body=[[00611810, 0061191c]]


void FUN_00611810(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *unaff_EDI;
  uint *puVar11;
  
  puVar8 = unaff_EDI;
  if (unaff_EDI != param_1) {
    while (puVar8 = puVar8 + 8, puVar8 != param_1) {
      uVar1 = puVar8[4];
      uVar2 = *puVar8;
      uVar3 = puVar8[3];
      uVar4 = puVar8[5];
      uVar5 = puVar8[6];
      uVar6 = puVar8[2];
      uVar7 = puVar8[7];
      if (((int)uVar3 < (int)unaff_EDI[3]) ||
         (((int)uVar3 <= (int)unaff_EDI[3] && (uVar6 <= unaff_EDI[2])))) {
        puVar9 = puVar8;
        puVar10 = puVar8 + 2;
        while( true ) {
          puVar11 = puVar10 + -8;
          if (((int)uVar3 < (int)puVar10[-7]) ||
             (((int)uVar3 <= (int)puVar10[-7] && (uVar6 <= *puVar11)))) break;
          *puVar9 = puVar10[-10];
          puVar9[2] = *puVar11;
          puVar9[3] = puVar10[-7];
          puVar9[4] = puVar10[-6];
          puVar9[5] = puVar10[-5];
          puVar9[6] = puVar10[-4];
          puVar9[7] = puVar10[-3];
          puVar9 = puVar10 + -10;
          puVar10 = puVar11;
        }
        *puVar9 = uVar2;
        puVar9[2] = uVar6;
        puVar9[3] = uVar3;
        puVar9[4] = uVar1;
        puVar9[5] = uVar4;
        puVar9[6] = uVar5;
        puVar9[7] = uVar7;
      }
      else {
        FUN_00612ff0();
        *unaff_EDI = uVar2;
        unaff_EDI[2] = uVar6;
        unaff_EDI[3] = uVar3;
        unaff_EDI[4] = uVar1;
        unaff_EDI[5] = uVar4;
        unaff_EDI[6] = uVar5;
        unaff_EDI[7] = uVar7;
      }
    }
  }
  return;
}

