// FUN_00a4e780 @ 00a4e780 body=[[00a4e780, 00a4e7e8]]


void FUN_00a4e780(undefined4 param_1)

{
  undefined4 *unaff_ESI;
  int unaff_EDI;
  
  FUN_009d9070(unaff_ESI,
               CONCAT22((short)*(undefined4 *)(unaff_EDI + 0x6b9c0),
                        (short)*(undefined4 *)(unaff_EDI + 0x6b9bc)));
  *unaff_ESI = &PTR_FUN_00e41538;
  unaff_ESI[0x53] = 0;
  unaff_ESI[0x54] = 0;
  unaff_ESI[0x55] = param_1;
  unaff_ESI[0x56] = unaff_EDI;
  return;
}

