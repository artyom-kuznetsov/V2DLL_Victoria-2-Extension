// FUN_00a68450 @ 00a68450 body=[[00a68450, 00a68557]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a68450(void)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  
  while( true ) {
    piVar5 = *(int **)(in_ECX + 0x80);
    if ((piVar5[0x20] == piVar5[0x20]) && (piVar5[0x20] == piVar5[0x42] + *piVar5)) break;
    cVar3 = FUN_00a6ab10();
    if (cVar3 != '\0') {
      FUN_00408ed0(*(int *)(in_ECX + 0x1c) + 0xbc,0,0xffffffff);
      iVar4 = (*(code *)_DAT_00000000[0xd])();
      *(undefined4 *)(iVar4 + 0x38) = uRam00000038;
      puVar1 = *(undefined4 **)(in_ECX + 0x54);
      iVar2 = puVar1[1];
      piVar5 = (int *)FUN_00aae9af(0x10);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        *piVar5 = iVar4;
        piVar5[1] = iVar2;
        piVar5[2] = 0;
        *(undefined1 *)(piVar5 + 3) = 0;
      }
      iVar4 = puVar1[2];
      puVar1[1] = piVar5;
      puVar1[2] = iVar4 + 1;
      if (iVar4 == 0) {
        *puVar1 = piVar5;
        (*(code *)*_DAT_00000000)(1);
      }
      else {
        *(int **)(iVar2 + 8) = piVar5;
        (*(code *)*_DAT_00000000)(1);
      }
    }
  }
  piVar5 = (int *)(*(int *)(in_ECX + 0x1c) + 0x54);
  *piVar5 = *piVar5 + 1;
  return;
}

