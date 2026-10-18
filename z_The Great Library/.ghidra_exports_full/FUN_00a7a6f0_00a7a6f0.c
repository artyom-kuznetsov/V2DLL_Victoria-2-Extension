// FUN_00a7a6f0 @ 00a7a6f0 body=[[00a7a6f0, 00a7a90c]]


undefined4 FUN_00a7a6f0(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  int in_ECX;
  
  switch(param_1) {
  case 0x201:
    *(undefined1 *)(in_ECX + 0x94) = 1;
    FUN_009ae5d0();
    *(undefined1 *)(in_ECX + 0xc9) = 1;
    return 1;
  case 0x202:
    *(undefined1 *)(in_ECX + 0x94) = 0;
    FUN_009ae5d0();
    *(undefined1 *)(in_ECX + 0xc9) = 1;
    return 1;
  case 0x203:
    FUN_009ae5d0();
    *(undefined1 *)(in_ECX + 0xc9) = 1;
    return 1;
  case 0x204:
    *(undefined1 *)(in_ECX + 0x95) = 1;
    FUN_009ae5d0();
    *(undefined1 *)(in_ECX + 0xc9) = 1;
    return 1;
  case 0x205:
    *(undefined1 *)(in_ECX + 0x95) = 0;
    FUN_009ae5d0();
    *(undefined1 *)(in_ECX + 0xc9) = 1;
    return 1;
  case 0x206:
    FUN_009ae5d0();
    *(undefined1 *)(in_ECX + 0xc9) = 1;
    return 1;
  case 0x207:
    *(undefined1 *)(in_ECX + 0x96) = 1;
    FUN_009ae5d0();
    *(undefined1 *)(in_ECX + 0xc9) = 1;
    return 1;
  case 0x208:
    *(undefined1 *)(in_ECX + 0x96) = 0;
    FUN_009ae5d0();
    *(undefined1 *)(in_ECX + 0xc9) = 1;
    return 1;
  case 0x209:
    FUN_009ae5d0();
    *(undefined1 *)(in_ECX + 0xc9) = 1;
    return 1;
  case 0x20a:
    sVar1 = (short)((uint)param_2 >> 0x10);
    *(int *)(in_ECX + 0x84) =
         (int)(short)((sVar1 / 100 + (sVar1 >> 0xf)) -
                     (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f));
    FUN_009ae5d0();
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + *(int *)(in_ECX + 0x84);
    *(undefined1 *)(in_ECX + 200) = 1;
    *(undefined1 *)(in_ECX + 0xc9) = 1;
    return 1;
  default:
    return 0;
  }
}

