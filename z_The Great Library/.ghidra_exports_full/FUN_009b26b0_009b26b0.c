// FUN_009b26b0 @ 009b26b0 body=[[009b26b0, 009b2708] [009b2712, 009b2745]]


void FUN_009b26b0(void)

{
  undefined1 *puVar1;
  undefined4 *in_ECX;
  undefined1 local_c [8];
  
  *in_ECX = &PTR_FUN_00e39380;
  in_ECX[1] = &PTR_FUN_00e39408;
  for (puVar1 = *(undefined1 **)(in_ECX[0x2f] + 200);
      (puVar1 != (undefined1 *)0x0 && (local_c != puVar1)); puVar1 = *(undefined1 **)(puVar1 + 0xc))
  {
  }
  FUN_0099e580(puVar1);
  if (in_ECX[0x4c] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x4c]);
  }
  in_ECX[0x4c] = 0;
  in_ECX[0x4d] = 0;
  in_ECX[0x4e] = 0;
  in_ECX[0x42] = CScrollbarObserver::vftable;
  FUN_009b2840(in_ECX);
  return;
}

