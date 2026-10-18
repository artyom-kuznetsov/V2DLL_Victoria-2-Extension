// FUN_004fb5c0 @ 004fb5c0 body=[[004fb5c0, 004fb658]]


void FUN_004fb5c0(void)

{
  undefined8 uVar1;
  undefined4 *in_EAX;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_ESI;
  int *piVar6;
  
  iVar4 = *(int *)(unaff_ESI + 0x15d0) - *(int *)(unaff_ESI + 0x15cc) >> 5;
  if (0 < iVar4) {
    iVar3 = 0;
    if (0 < iVar4) {
      piVar6 = *(int **)(unaff_ESI + 0x15cc);
      do {
        if (*piVar6 == *(int *)(*(int *)(unaff_ESI + 0xbd0) + 0x40)) {
          iVar4 = iVar3 * 0x20 + 4 + *(int *)(unaff_ESI + 0x15cc);
          uVar5 = *(undefined4 *)(iVar4 + 4);
          *(undefined8 *)(in_EAX + 2) =
               *(undefined8 *)(iVar3 * 0x20 + 0xc + *(int *)(unaff_ESI + 0x15cc));
          uVar1 = *(undefined8 *)(iVar4 + 0x10);
          uVar2 = *(undefined1 *)(iVar4 + 0x18);
          goto LAB_004fb61d;
        }
        iVar3 = iVar3 + 1;
        piVar6 = piVar6 + 8;
      } while (iVar3 < iVar4);
    }
  }
  uVar5 = *(undefined4 *)(unaff_ESI + 0x924);
  uVar2 = *(undefined1 *)(unaff_ESI + 0x938);
  *(undefined8 *)(in_EAX + 2) = *(undefined8 *)(unaff_ESI + 0x928);
  uVar1 = *(undefined8 *)(unaff_ESI + 0x930);
LAB_004fb61d:
  *(undefined1 *)(in_EAX + 6) = uVar2;
  *(undefined8 *)(in_EAX + 4) = uVar1;
  *in_EAX = CColor::vftable;
  in_EAX[1] = uVar5;
  return;
}

