// FUN_00ae3220 @ 00ae3220 body=[[00ae3220, 00ae3278]]


uint FUN_00ae3220(void)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int *in_ECX;
  uint uVar5;
  
  uVar1 = in_ECX[1];
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      puVar3 = (undefined4 *)FUN_00b15770(*(undefined4 *)(*(int *)(*in_ECX + uVar5 * 4) + 0x38));
      puVar4 = (undefined1 *)*puVar3;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_00ded94d;
      }
      cVar2 = FUN_00b147b0(puVar4);
      if (cVar2 == '\x01') {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  return 0xffffffff;
}

