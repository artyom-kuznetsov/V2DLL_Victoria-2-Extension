// FUN_005340a0 @ 005340a0 body=[[005340a0, 00534196]]


/* WARNING: Removing unreachable block (ram,0x00534177) */

void FUN_005340a0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EDI;
  
  uVar3 = *(uint *)(unaff_EDI + 0x1418);
  while ((*(uint *)(unaff_EDI + 0x1418) <= uVar3 && (uVar3 < *(uint *)(unaff_EDI + 0x141c)))) {
    iVar1 = *(int *)(uVar3 + 4);
    iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4);
    *(undefined4 *)(iVar2 + 0x142c) = 0;
    *(undefined4 *)(iVar2 + 0x1428) = 0x2d2d2d;
    iVar2 = *(int *)(*(int *)(unaff_EDI + 0xbe8) + iVar1 * 4);
    uVar3 = uVar3 + 8;
    if (*(int *)(iVar2 + 0x40) != 2) {
      *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
    }
    *(undefined4 *)(iVar2 + 0x40) = 2;
    iVar2 = DAT_012586dc;
    iVar1 = *(int *)(*(int *)(unaff_EDI + 0xbe8) + iVar1 * 4);
    *(undefined4 *)(iVar1 + 0x48) = 0;
    iVar2 = *(int *)(*(int *)(iVar2 + 0x30) + 0x404);
    if (iVar2 < 0) {
      *(int *)(iVar1 + 0x4c) = -iVar2;
      *(int *)(iVar1 + 0x48) = iVar2;
    }
    else {
      *(undefined4 *)(iVar1 + 0x4c) = 0;
    }
  }
  if (*(int *)(unaff_EDI + 0x1418) != *(int *)(unaff_EDI + 0x141c)) {
    *(int *)(unaff_EDI + 0x141c) = *(int *)(unaff_EDI + 0x1418);
  }
  return;
}

