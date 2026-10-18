// FUN_00ae3120 @ 00ae3120 body=[[00ae3120, 00ae3176]]


int FUN_00ae3120(void)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int *in_ECX;
  uint uVar6;
  
  uVar1 = in_ECX[1];
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      iVar2 = *(int *)(*in_ECX + uVar6 * 4);
      puVar4 = (undefined4 *)FUN_00b15770(*(undefined4 *)(iVar2 + 0x38));
      puVar5 = (undefined1 *)*puVar4;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_00ded94d;
      }
      cVar3 = FUN_00b147b0(puVar5);
      if (cVar3 == '\x01') {
        return iVar2;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  return 0;
}

