// ___free_lconv_num @ 00ac1ee8 body=[[00ac1ee8, 00ac1f50]]


/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2010 Release */

void ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_00ef22b8) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_00ef22bc) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_00ef22c0) {
      _free((undefined *)param_1[2]);
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_00ef22e8) {
      _free((undefined *)param_1[0xc]);
    }
    if ((undefined *)param_1[0xd] != PTR_DAT_00ef22ec) {
      _free((undefined *)param_1[0xd]);
    }
  }
  return;
}

