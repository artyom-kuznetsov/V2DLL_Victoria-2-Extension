// FUN_00ae31d0 @ 00ae31d0 body=[[00ae31d0, 00ae3216]]


int FUN_00ae31d0(void)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined1 *puVar4;
  int in_ECX;
  uint uVar5;
  
  uVar1 = *(uint *)(in_ECX + 0x14);
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x10) + uVar5 * 4);
      puVar4 = *(undefined1 **)(iVar2 + 0x20);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_00ded94d;
      }
      cVar3 = FUN_00b147b0(puVar4);
      if (cVar3 == '\x01') {
        return iVar2;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  return 0;
}

