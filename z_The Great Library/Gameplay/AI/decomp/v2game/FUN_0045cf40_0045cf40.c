// FUN_0045cf40 @ 0045cf40 body=[[0045cf40, 0045cf85] [0045cf90, 0045cfc8] [0045cfd0, 0045d012]]


void FUN_0045cf40(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *unaff_EDI;
  int local_10;
  
  puVar6 = unaff_EDI;
  if (unaff_EDI != param_1) {
    while (puVar5 = (undefined8 *)((int)puVar6 + 0x14), puVar5 != param_1) {
      uVar2 = puVar5[1];
      uVar4 = *(undefined4 *)(puVar5 + 2);
      uVar3 = *puVar5;
      local_10 = (int)uVar2;
      puVar7 = puVar5;
      if (*(int *)(unaff_EDI + 1) < local_10) {
        for (; unaff_EDI != puVar7; puVar7 = (undefined8 *)((int)puVar7 + -0x14)) {
          *puVar7 = *(undefined8 *)((int)puVar7 + -0x14);
          puVar7[1] = *(undefined8 *)((int)puVar7 + -0xc);
          *(undefined4 *)(puVar7 + 2) = *(undefined4 *)((int)puVar7 + -4);
        }
        *unaff_EDI = uVar3;
        unaff_EDI[1] = uVar2;
        *(undefined4 *)(unaff_EDI + 2) = uVar4;
        puVar6 = puVar5;
      }
      else {
        iVar1 = *(int *)(puVar6 + 1);
        puVar6 = puVar5;
        while (iVar1 < local_10) {
          *puVar6 = *(undefined8 *)((int)puVar6 + -0x14);
          puVar6[1] = *(undefined8 *)((int)puVar6 + -0xc);
          *(undefined4 *)(puVar6 + 2) = *(undefined4 *)((int)puVar6 + -4);
          iVar1 = *(int *)(puVar6 + -4);
          puVar6 = (undefined8 *)((int)puVar6 + -0x14);
        }
        *puVar6 = uVar3;
        puVar6[1] = uVar2;
        *(undefined4 *)(puVar6 + 2) = uVar4;
        puVar6 = puVar5;
      }
    }
  }
  return;
}

