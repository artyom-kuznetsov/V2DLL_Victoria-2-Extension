// FUN_00b07a10 @ 00b07a10 body=[[00b07a10, 00b07abe]]


int * FUN_00b07a10(void)

{
  int iVar1;
  int *piVar2;
  void *_Dst;
  int in_ECX;
  size_t _Size;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b38f81;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = (*(code *)PTR_FUN_00f01b08)
                    (0x1c,0xcc,4,0,0,0xffffffff,DAT_00ef259c ^ (uint)&stack0xffffffe8);
  uStack_4 = 0;
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00b07970(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 0x18),
                                 *(undefined4 *)(in_ECX + 0x14),*(undefined1 *)(in_ECX + 8));
  }
  uStack_4 = 0xffffffff;
  _Dst = (void *)(**(code **)(*piVar2 + 0x10))();
  _Size = *(int *)(in_ECX + 0x14) * *(int *)(in_ECX + 4);
  if (*(char *)(in_ECX + 8) != '\0') {
    _Size = _Size * 2;
  }
  FID_conflict__memcpy(_Dst,*(void **)(in_ECX + 0xc),_Size);
  ExceptionList = local_c;
  return piVar2;
}

