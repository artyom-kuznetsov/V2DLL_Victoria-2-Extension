// FUN_007c6ad0 @ 007c6ad0 body=[[007c6ad0, 007c6ba5]]


/* WARNING: Removing unreachable block (ram,0x007c6b89) */

undefined4 FUN_007c6ad0(void)

{
  uint uVar1;
  int in_EAX;
  uint uVar2;
  int in_ECX;
  longlong lVar3;
  longlong lVar4;
  
  if (*(int *)(in_ECX + 0x58) == 0) {
    lVar3 = 0;
  }
  else if (*(char *)(*(int *)(in_ECX + 0x68) + 0x40) == '\0') {
    lVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(in_ECX + 0x58);
    uVar2 = uVar1 - *(int *)(in_ECX + 0x60);
    lVar3 = __alldiv(uVar2 * 0x40000000,((int)uVar2 >> 0x1f) << 0x1e | uVar2 >> 2,uVar1 << 0xf,
                     ((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11);
  }
  if (*(int *)(in_EAX + 0x58) == 0) {
    lVar4 = 0;
  }
  else if (*(char *)(*(int *)(in_EAX + 0x68) + 0x40) == '\0') {
    lVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(in_EAX + 0x58);
    uVar2 = uVar1 - *(int *)(in_EAX + 0x60);
    lVar4 = __alldiv(uVar2 * 0x40000000,((int)uVar2 >> 0x1f) << 0x1e | uVar2 >> 2,uVar1 << 0xf,
                     ((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11);
  }
  if (lVar3 <= lVar4) {
    return 0;
  }
  return 1;
}

