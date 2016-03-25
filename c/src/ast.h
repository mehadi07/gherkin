#ifndef GHERKIN_AST_H_
#define GHERKIN_AST_H_

#include "item.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum GherkinAstType {
    Gherkin_Feature,
    Gherkin_Background,
    Gherkin_Scenario,
    Gherkin_ScenarioOutline,
    Gherkin_Examples,
    Gherkin_Step,
    Gherkin_DataTable,
    Gherkin_DocString,
    Gherkin_TableRow,
    Gherkin_TableCell,
    Gherkin_Tag,
    Gherkin_Comment
} GherkinAstType;

typedef struct GherkinAstItem {
    item_delete_function item_delete;
    GherkinAstType type;
} GherkinAstItem;

void GherkinAstItem_delete(GherkinAstItem* ast_item);

#ifdef __cplusplus
}
#endif

#endif /* GHERKIN_AST_H_ */
