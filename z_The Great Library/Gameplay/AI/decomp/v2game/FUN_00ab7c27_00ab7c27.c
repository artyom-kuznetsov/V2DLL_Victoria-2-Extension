// ___check_float_string @ 00ab7c27 body=[[00ab7c27, 00ab7c7d]]


/* Library Function - Single Match
    ___check_float_string
   
   Library: Visual Studio 2010 Release */

undefined4 ___check_float_string(size_t param_1,void *param_2,undefined4 *param_3)

{
  size_t _Count;
  void *pvVar1;
  size_t *unaff_ESI;
  undefined4 *unaff_EDI;
  
  _Count = *unaff_ESI;
  if (param_1 == _Count) {
    if ((void *)*unaff_EDI == param_2) {
      pvVar1 = __calloc_crt(_Count,2);
      *unaff_EDI = pvVar1;
      if (pvVar1 == (void *)0x0) {
        return 0;
      }
      *param_3 = 1;
      FID_conflict__memcpy((void *)*unaff_EDI,param_2,*unaff_ESI);
    }
    else {
      pvVar1 = __recalloc_crt((void *)*unaff_EDI,_Count,2);
      if (pvVar1 == (void *)0x0) {
        return 0;
      }
      *unaff_EDI = pvVar1;
    }
    *unaff_ESI = *unaff_ESI << 1;
  }
  return 1;
}

