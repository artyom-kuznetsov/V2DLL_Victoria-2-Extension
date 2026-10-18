// FUN_00a1c430 @ 00a1c430 body=[[00a1c430, 00a1c5a2]]


undefined4 FUN_00a1c430(undefined4 *param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *_Memory;
  void *pvVar3;
  char *pcVar4;
  int local_c;
  undefined4 local_8;
  
  puVar1 = param_1;
  if ((param_1 == (undefined4 *)0x0) || (param_1[6] == 0)) {
    return 0xffffff9a;
  }
  if (param_1[0x1f] != 0) {
    FUN_00a1c810();
  }
  iVar2 = FUN_00a1c260(&local_c,&param_1,&local_8);
  if (iVar2 == 0) {
    _Memory = _malloc(0x84);
    if (_Memory != (undefined4 *)0x0) {
      pvVar3 = _malloc(0x4000);
      *_Memory = pvVar3;
      _Memory[0x11] = param_1;
      _Memory[0x12] = local_8;
      _Memory[0x13] = 0;
      if (pvVar3 != (void *)0x0) {
        _Memory[0x10] = 0;
        iVar2 = puVar1[0xd];
        _Memory[0x15] = puVar1[0xf];
        _Memory[0x14] = 0;
        _Memory[0x19] = puVar1[0xd];
        _Memory[0x18] = *puVar1;
        _Memory[0x1a] = puVar1[3];
        _Memory[6] = 0;
        if (iVar2 != 0) {
          _Memory[9] = 0;
          _Memory[10] = 0;
          _Memory[0xb] = 0;
          iVar2 = FUN_00a1b500();
          if (iVar2 == 0) {
            _Memory[0x10] = 1;
          }
        }
        _Memory[0x16] = puVar1[0x10];
        _Memory[0x17] = puVar1[0x11];
        *(byte *)(_Memory + 0x1b) = *(byte *)(puVar1 + 0xc) & 1;
        if (((uint)puVar1[0xc] >> 3 & 1) == 0) {
          *(undefined1 *)(_Memory + 0x20) = *(undefined1 *)((int)puVar1 + 0x3f);
        }
        else {
          *(undefined1 *)(_Memory + 0x20) = *(undefined1 *)((int)puVar1 + 0x39);
        }
        _Memory[0x1f] = -(uint)(*(char *)(_Memory + 0x1b) != '\0') & 0xc;
        _Memory[0x1c] = 0x12345678;
        _Memory[0x1d] = 0x23456789;
        _Memory[0x1e] = 0x34567890;
        for (pcVar4 = param_2; (pcVar4 != (char *)0x0 && (*pcVar4 != '\0')); pcVar4 = pcVar4 + 1) {
          FUN_00a1b250();
        }
        _Memory[0xf] = puVar1[0x1e] + 0x1e + local_c;
        _Memory[2] = 0;
        puVar1[0x1f] = _Memory;
        return 0;
      }
      _free(_Memory);
    }
    return 0xffffff98;
  }
  return 0xffffff99;
}

