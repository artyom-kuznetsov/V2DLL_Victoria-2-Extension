// FUN_006ea040 @ 006ea040 body=[[006ea040, 006ea0d1]]


void FUN_006ea040(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_ESI;
  
  if (((*(int *)(unaff_ESI + 0x80) != 0) && (*(int *)(unaff_ESI + 0x84) != 0)) &&
     (*(int *)(*(int *)(unaff_ESI + 0x84) + 0x138) < *(int *)(*(int *)(unaff_ESI + 0x80) + 0x138)))
  {
    uVar1 = *(undefined4 *)(unaff_ESI + 0x80);
    *(undefined4 *)(unaff_ESI + 0x80) = *(undefined4 *)(unaff_ESI + 0x84);
    *(undefined4 *)(unaff_ESI + 0x84) = uVar1;
  }
  iVar2 = *(int *)(unaff_ESI + 0x2c);
  if (((iVar2 != DAT_012587f0 + 0x48) && (iVar2 != 0)) && (*(int *)(unaff_ESI + 0x80) != 0)) {
    FUN_006e7d70(iVar2,*(int *)(unaff_ESI + 0x80));
  }
  iVar2 = *(int *)(unaff_ESI + 0x2c);
  if (((iVar2 != DAT_012587f0 + 0x48) && (iVar2 != 0)) && (*(int *)(unaff_ESI + 0x84) != 0)) {
    FUN_006e7d70(iVar2,*(int *)(unaff_ESI + 0x84));
  }
  return;
}

