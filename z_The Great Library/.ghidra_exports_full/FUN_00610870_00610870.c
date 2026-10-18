// FUN_00610870 @ 00610870 body=[[00610870, 00610910]]


void FUN_00610870(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *unaff_EDI;
  uint local_14;
  
  puVar6 = unaff_EDI;
  if (unaff_EDI != param_1) {
    while (puVar6 = puVar6 + 4, puVar6 != param_1) {
      uVar2 = *(undefined8 *)puVar6;
      uVar3 = *(undefined8 *)(puVar6 + 2);
      local_14 = (uint)uVar2;
      puVar5 = puVar6;
      if (local_14 < *unaff_EDI) {
        for (; unaff_EDI != puVar5; puVar5 = puVar5 + -4) {
          *(undefined8 *)puVar5 = *(undefined8 *)(puVar5 + -4);
          *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(puVar5 + -2);
        }
        *(undefined8 *)unaff_EDI = uVar2;
        *(undefined8 *)(unaff_EDI + 2) = uVar3;
      }
      else {
        uVar1 = puVar6[-4];
        puVar7 = puVar6 + -4;
        while (puVar4 = puVar7, local_14 < uVar1) {
          *(undefined8 *)puVar5 = *(undefined8 *)puVar4;
          *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(puVar4 + 2);
          puVar7 = puVar4 + -4;
          puVar5 = puVar4;
          uVar1 = puVar4[-4];
        }
        *(undefined8 *)puVar5 = uVar2;
        *(undefined8 *)(puVar5 + 2) = uVar3;
      }
    }
  }
  return;
}

