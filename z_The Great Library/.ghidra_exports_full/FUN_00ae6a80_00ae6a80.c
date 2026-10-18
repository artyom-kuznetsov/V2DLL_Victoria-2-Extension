// FUN_00ae6a80 @ 00ae6a80 body=[[00ae6a80, 00ae6af2]]


void FUN_00ae6a80(void)

{
  uint uVar1;
  undefined1 *puVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(in_ECX + 8);
  FUN_00b15c30("---------------------------------");
  FUN_00b15c30("Total Registered Events = %d",*(undefined4 *)(in_ECX + 8));
  FUN_00b15c30("---------------------------------");
  uVar3 = 0;
  if (uVar1 != 0) {
    iVar4 = 0;
    do {
      puVar2 = *(undefined1 **)(*(int *)(in_ECX + 4) + iVar4);
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = &DAT_00ded94d;
      }
      FUN_00b15c30("Event #%d: Name = \'%s\'   -    Unique ID = %d",uVar3,puVar2,
                   *(undefined4 *)(*(int *)(in_ECX + 4) + 0xc + iVar4));
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (uVar3 < uVar1);
  }
  FUN_00b15c30("---------------------------------");
  return;
}

