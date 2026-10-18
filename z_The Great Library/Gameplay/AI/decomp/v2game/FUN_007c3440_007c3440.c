// FUN_007c3440 @ 007c3440 body=[[007c3440, 007c351b]]


void FUN_007c3440(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_EAX;
  uint *puVar6;
  undefined4 *puVar7;
  int unaff_ESI;
  int *piVar8;
  
  iVar5 = DAT_012588e8;
  *(undefined1 *)(unaff_ESI + 0x16c) = 1;
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 4) * 4);
  puVar6 = (uint *)(iVar1 + 0x9d8);
  piVar8 = (int *)*puVar6;
  while (((int *)*puVar6 <= piVar8 && (piVar8 < *(int **)(iVar1 + 0x9dc)))) {
    uVar2 = *(undefined4 *)(*(int *)(iVar5 + 0xacc) + *piVar8 * 4);
    iVar3 = *(int *)(unaff_ESI + 0x98);
    piVar8 = piVar8 + 1;
    puVar7 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      *puVar7 = uVar2;
      puVar7[1] = iVar3;
      puVar7[2] = 0;
      *(undefined1 *)(puVar7 + 3) = 0;
    }
    iVar4 = *(int *)(unaff_ESI + 0x9c);
    *(undefined4 **)(unaff_ESI + 0x98) = puVar7;
    *(int *)(unaff_ESI + 0x9c) = iVar4 + 1;
    if (iVar4 == 0) {
      *(undefined4 **)(unaff_ESI + 0x94) = puVar7;
      *(undefined1 *)(unaff_ESI + 0x16c) = 1;
    }
    else {
      *(undefined4 **)(iVar3 + 8) = puVar7;
      *(undefined1 *)(unaff_ESI + 0x16c) = 1;
    }
  }
  return;
}

