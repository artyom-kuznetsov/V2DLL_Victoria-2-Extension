// FUN_00a7a630 @ 00a7a630 body=[[00a7a630, 00a7a6e7]]


undefined1 FUN_00a7a630(void)

{
  undefined4 *puVar1;
  int *in_ECX;
  undefined1 uVar2;
  tagPOINT local_18;
  int local_c;
  
  *(undefined1 *)((int)in_ECX + 0xc9) = 0;
  GetCursorPos(&local_18);
  uVar2 = 0;
  in_ECX[0x1f] = local_18.x - in_ECX[0x22];
  in_ECX[0x20] = local_18.y - in_ECX[0x23];
  if ((local_18.x - in_ECX[0x22] != 0) || (local_18.y - in_ECX[0x23] != 0)) {
    local_c = local_18.y;
    for (puVar1 = (undefined4 *)in_ECX[0x13]; puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[2]) {
      (**(code **)(*(int *)*puVar1 + 4))(local_18.x,local_c);
    }
    uVar2 = 1;
  }
  in_ECX[0x22] = in_ECX[0x22] + in_ECX[0x1f];
  in_ECX[0x23] = in_ECX[0x23] + in_ECX[0x20];
  (**(code **)(*in_ECX + 0x5c))();
  if ((char)in_ECX[0x32] != '\x01') {
    in_ECX[0x21] = 0;
    return uVar2;
  }
  *(undefined1 *)(in_ECX + 0x32) = 0;
  return uVar2;
}

