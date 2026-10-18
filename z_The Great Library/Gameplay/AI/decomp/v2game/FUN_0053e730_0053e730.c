// FUN_0053e730 @ 0053e730 body=[[0053e730, 0053e7b5]]


void FUN_0053e730(void)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  int in_EDX;
  int unaff_ESI;
  int iVar5;
  uint local_c;
  int local_8;
  
  if (*(char *)(in_ECX + 0x131) == '\0') {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(in_EDX + 0x118) + *(int *)(in_ECX + 0x134) * 4);
  }
  iVar4 = *(int *)(iVar5 + 0x24) / 1000;
  if (0 < iVar4) {
    FUN_004da850(in_ECX,&local_c,unaff_ESI,0,unaff_ESI + 0x1184,iVar4);
    puVar2 = (uint *)(unaff_ESI + 0xe78);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 + local_c;
    *(int *)(unaff_ESI + 0xe7c) =
         *(int *)(unaff_ESI + 0xe7c) + local_8 + (uint)CARRY4(uVar3,local_c);
    iVar4 = *(int *)(unaff_ESI + (DAT_01258738 + 0xd) * 0x10);
    puVar2 = (uint *)(iVar4 + 0x40);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 + local_c;
    piVar1 = (int *)(iVar4 + 0x44);
    *piVar1 = *piVar1 + local_8 + (uint)CARRY4(uVar3,local_c);
    *(undefined4 *)(iVar5 + 0x24) = 0;
    *(undefined4 *)(iVar5 + 0x20) = 0;
  }
  return;
}

