// FUN_009e5160 @ 009e5160 body=[[009e5160, 009e519b] [009e51a5, 009e51ee]]


void FUN_009e5160(void)

{
  void *_Dst;
  int in_ECX;
  undefined1 local_8 [4];
  
  FUN_004138b0(in_ECX + 0x31c,local_8,*(undefined4 *)(in_ECX + 0x31c),*(undefined4 *)(in_ECX + 800))
  ;
  if (*(int *)(in_ECX + 0x80) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(in_ECX + 0x80));
  }
  *(undefined4 *)(in_ECX + 0x80) = 0;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  *(undefined4 *)(in_ECX + 0x88) = 0;
  _Dst = *(void **)(in_ECX + 0x30c);
  if (_Dst != *(void **)(in_ECX + 0x310)) {
    FID_conflict__memcpy(_Dst,*(void **)(in_ECX + 0x310),0);
    *(void **)(in_ECX + 0x310) = _Dst;
  }
  return;
}

