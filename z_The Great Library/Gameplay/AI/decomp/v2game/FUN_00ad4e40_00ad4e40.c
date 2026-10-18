// FUN_00ad4e40 @ 00ad4e40 body=[[00ad4e40, 00ad4e8e]]


void FUN_00ad4e40(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int in_ECX;
  uint uVar4;
  
  uVar1 = *(uint *)(in_ECX + 0x84);
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      puVar2 = (undefined4 *)
               FUN_00b15770(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x80) + uVar4 * 4) + 0x10));
      puVar3 = (undefined1 *)*puVar2;
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_00ded94d;
      }
      FUN_00b15c30("%d = \'%s\'",uVar4,puVar3);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return;
}

