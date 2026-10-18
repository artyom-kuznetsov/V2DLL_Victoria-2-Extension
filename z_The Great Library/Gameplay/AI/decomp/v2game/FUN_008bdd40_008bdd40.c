// FUN_008bdd40 @ 008bdd40 body=[[008bdd40, 008bddc4] [008bddc8, 008bde22]]


/* WARNING: Removing unreachable block (ram,0x008bddbc) */

void FUN_008bdd40(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined1 local_c [8];
  
  *(undefined1 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  if (param_1 == 0x405) {
    *(undefined1 *)(in_ECX + 0x18) = 1;
    return;
  }
  if (param_1 != 0x3de) {
    pcVar2 = &stack0x00000008;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(&stack0x00000008,(int)pcVar2 - (int)&stack0x00000009);
    cVar1 = FUN_0040b360();
    if (cVar1 == '\0') {
      iVar3 = FUN_00aaf0c5(&stack0x00000008);
      if (iVar3 == 0) {
        puVar5 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_c,&stack0x00000008);
        *(undefined4 *)(in_ECX + 0x24) = *puVar5;
        *(undefined4 *)(in_ECX + 0x28) = puVar5[1];
        return;
      }
      uVar4 = FUN_00aaf0c5(&stack0x00000008);
      *(undefined4 *)(in_ECX + 0x1c) = uVar4;
      return;
    }
    *(undefined1 *)(in_ECX + 0x20) = 1;
    return;
  }
  *(undefined1 *)(in_ECX + 0x19) = 1;
  return;
}

