// FUN_00868640 @ 00868640 body=[[00868640, 0086866b] [0086866f, 0086868d]]


void FUN_00868640(void)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x10) != 0) {
    uVar3 = *(int *)(unaff_ESI + 0x10) + -1 + *(int *)(unaff_ESI + 0xc);
    if (*(uint *)(unaff_ESI + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(unaff_ESI + 8);
    }
    puVar2 = *(undefined4 **)(*(int *)(unaff_ESI + 4) + uVar3 * 4);
    if (0xf < (uint)puVar2[5]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*puVar2);
    }
    puVar2[5] = 0xf;
    puVar2[4] = 0;
    *(undefined1 *)puVar2 = 0;
    piVar1 = (int *)(unaff_ESI + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(unaff_ESI + 0xc) = 0;
    }
  }
  return;
}

