// FUN_00558ca0 @ 00558ca0 body=[[00558ca0, 00558d87]]


void FUN_00558ca0(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *unaff_ESI;
  
  puVar6 = unaff_ESI;
  if (unaff_ESI != param_1) {
    while (puVar6 = puVar6 + 4, puVar6 != param_1) {
      uVar1 = *puVar6;
      uVar2 = puVar6[2];
      uVar3 = puVar6[1];
      puVar5 = puVar6 + 2;
      iVar4 = puVar6[3];
      puVar7 = puVar6;
      if ((iVar4 < (int)unaff_ESI[3]) ||
         ((iVar4 <= (int)unaff_ESI[3] && (uVar2 <= (uint)unaff_ESI[2])))) {
        while( true ) {
          if ((iVar4 < (int)puVar7[-1]) ||
             ((iVar4 <= (int)puVar7[-1] && (uVar2 <= (uint)puVar7[-2])))) break;
          *puVar7 = puVar7[-4];
          puVar7[1] = puVar7[-3];
          puVar7[2] = puVar7[-2];
          puVar7[3] = puVar7[-1];
          puVar7 = puVar7 + -4;
        }
        *puVar7 = uVar1;
        puVar7[1] = uVar3;
        puVar7[2] = uVar2;
        puVar7[3] = iVar4;
      }
      else {
        while (unaff_ESI != puVar7) {
          puVar5[-2] = puVar5[-6];
          puVar5[-1] = puVar5[-5];
          *puVar5 = puVar5[-4];
          puVar5[1] = puVar5[-3];
          puVar7 = puVar5 + -6;
          puVar5 = puVar5 + -4;
        }
        *unaff_ESI = uVar1;
        unaff_ESI[1] = uVar3;
        unaff_ESI[2] = uVar2;
        unaff_ESI[3] = iVar4;
      }
    }
  }
  return;
}

