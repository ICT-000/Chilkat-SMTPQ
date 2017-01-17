// This is a generated source file for Chilkat version 9.5.0.64
#ifndef _C_CkStringBuilderWH
#define _C_CkStringBuilderWH
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_VISIBLE_PUBLIC HCkStringBuilderW CkStringBuilderW_Create(void);
CK_VISIBLE_PUBLIC void CkStringBuilderW_Dispose(HCkStringBuilderW handle);
CK_VISIBLE_PUBLIC int CkStringBuilderW_getIntValue(HCkStringBuilderW cHandle);
CK_VISIBLE_PUBLIC void  CkStringBuilderW_putIntValue(HCkStringBuilderW cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_getLastMethodSuccess(HCkStringBuilderW cHandle);
CK_VISIBLE_PUBLIC void  CkStringBuilderW_putLastMethodSuccess(HCkStringBuilderW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC int CkStringBuilderW_getLength(HCkStringBuilderW cHandle);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_Append(HCkStringBuilderW cHandle, const wchar_t *value);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_AppendBd(HCkStringBuilderW cHandle, HCkBinDataW binData, const wchar_t *charset, int offset, int numBytes);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_AppendEncoded(HCkStringBuilderW cHandle, HCkByteData binaryData, const wchar_t *encoding);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_AppendInt(HCkStringBuilderW cHandle, int value);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_AppendInt64(HCkStringBuilderW cHandle, __int64 value);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_AppendLine(HCkStringBuilderW cHandle, const wchar_t *value, BOOL crlf);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_AppendSb(HCkStringBuilderW cHandle, HCkStringBuilderW sb);
CK_VISIBLE_PUBLIC void CkStringBuilderW_Clear(HCkStringBuilderW cHandle);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_Contains(HCkStringBuilderW cHandle, const wchar_t *str, BOOL caseSensitive);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_ContentsEqual(HCkStringBuilderW cHandle, const wchar_t *str, BOOL caseSensitive);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_ContentsEqualSb(HCkStringBuilderW cHandle, HCkStringBuilderW sb, BOOL caseSensitive);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_Decode(HCkStringBuilderW cHandle, const wchar_t *encoding, const wchar_t *charset);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_Encode(HCkStringBuilderW cHandle, const wchar_t *encoding, const wchar_t *charset);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_EndsWith(HCkStringBuilderW cHandle, const wchar_t *substr, BOOL caseSensitive);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_EntityDecode(HCkStringBuilderW cHandle);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_GetAfterBetween(HCkStringBuilderW cHandle, const wchar_t *searchAfter, const wchar_t *beginMark, const wchar_t *endMark, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkStringBuilderW_getAfterBetween(HCkStringBuilderW cHandle, const wchar_t *searchAfter, const wchar_t *beginMark, const wchar_t *endMark);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_GetAsString(HCkStringBuilderW cHandle, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkStringBuilderW_getAsString(HCkStringBuilderW cHandle);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_GetBetween(HCkStringBuilderW cHandle, const wchar_t *beginMark, const wchar_t *endMark, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkStringBuilderW_getBetween(HCkStringBuilderW cHandle, const wchar_t *beginMark, const wchar_t *endMark);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_GetDecoded(HCkStringBuilderW cHandle, const wchar_t *encoding, HCkByteData outBytes);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_GetEncoded(HCkStringBuilderW cHandle, const wchar_t *encoding, const wchar_t *charset, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkStringBuilderW_getEncoded(HCkStringBuilderW cHandle, const wchar_t *encoding, const wchar_t *charset);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_GetNth(HCkStringBuilderW cHandle, int index, const wchar_t *delimiterChar, BOOL exceptDoubleQuoted, BOOL exceptEscaped, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkStringBuilderW_getNth(HCkStringBuilderW cHandle, int index, const wchar_t *delimiterChar, BOOL exceptDoubleQuoted, BOOL exceptEscaped);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_LastNLines(HCkStringBuilderW cHandle, int numLines, BOOL bCrlf, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkStringBuilderW_lastNLines(HCkStringBuilderW cHandle, int numLines, BOOL bCrlf);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_LoadFile(HCkStringBuilderW cHandle, const wchar_t *path, const wchar_t *charset);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_Prepend(HCkStringBuilderW cHandle, const wchar_t *value);
CK_VISIBLE_PUBLIC int CkStringBuilderW_Replace(HCkStringBuilderW cHandle, const wchar_t *value, const wchar_t *replacement);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_ReplaceAllBetween(HCkStringBuilderW cHandle, const wchar_t *beginMark, const wchar_t *endMark, const wchar_t *replacement, BOOL replaceMarks);
CK_VISIBLE_PUBLIC int CkStringBuilderW_ReplaceBetween(HCkStringBuilderW cHandle, const wchar_t *beginMark, const wchar_t *endMark, const wchar_t *value, const wchar_t *replacement);
CK_VISIBLE_PUBLIC int CkStringBuilderW_ReplaceWord(HCkStringBuilderW cHandle, const wchar_t *value, const wchar_t *replacement);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_SetNth(HCkStringBuilderW cHandle, int index, const wchar_t *value, const wchar_t *delimiterChar, BOOL exceptDoubleQuoted, BOOL exceptEscaped);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_SetString(HCkStringBuilderW cHandle, const wchar_t *value);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_StartsWith(HCkStringBuilderW cHandle, const wchar_t *substr, BOOL caseSensitive);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_ToCRLF(HCkStringBuilderW cHandle);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_ToLF(HCkStringBuilderW cHandle);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_ToLowercase(HCkStringBuilderW cHandle);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_ToUppercase(HCkStringBuilderW cHandle);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_Trim(HCkStringBuilderW cHandle);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_TrimInsideSpaces(HCkStringBuilderW cHandle);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_WriteFile(HCkStringBuilderW cHandle, const wchar_t *path, const wchar_t *charset, BOOL emitBom);
#endif
