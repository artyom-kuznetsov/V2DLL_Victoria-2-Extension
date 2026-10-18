// FUN_00a1d6f0 @ 00a1d6f0 body=[[00a1d6f0, 00a1d78c] [00a1d790, 00a1d7bf]]


void FUN_00a1d6f0(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  int unaff_ESI;
  int iVar5;
  undefined1 local_c [8];
  
  if (*(char *)(unaff_ESI + 0x68) != '\0') {
    uVar1 = FUN_00418e30(&DAT_00f1fb68,"MD5::finalize:  Already finalized this digest!");
    FUN_00401280(uVar1);
    return;
  }
  uVar4 = 0;
  puVar2 = (undefined1 *)(unaff_ESI + 0x10);
  do {
    local_c[uVar4] = *puVar2;
    local_c[uVar4 + 1] = puVar2[1];
    local_c[uVar4 + 2] = puVar2[2];
    local_c[uVar4 + 3] = puVar2[3];
    uVar4 = uVar4 + 4;
    puVar2 = puVar2 + 4;
  } while (uVar4 < 8);
  FUN_00a1d420(&DAT_00f1f700);
  FUN_00a1d420(local_c);
  puVar2 = (undefined1 *)(unaff_ESI + 0x59);
  puVar3 = (undefined1 *)(unaff_ESI + 2);
  iVar5 = 4;
  do {
    puVar2[-1] = puVar3[-2];
    *puVar2 = puVar3[-1];
    puVar2[1] = *puVar3;
    puVar2[2] = puVar3[1];
    puVar3 = puVar3 + 4;
    puVar2 = puVar2 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(undefined1 *)(unaff_ESI + 0x18) = 0;
  *(undefined1 *)(unaff_ESI + 0x68) = 1;
  return;
}

