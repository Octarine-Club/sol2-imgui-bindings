// GENERATED FILE -- DO NOT EDIT BY HAND.
// Produced by codegen/generate.py from codegen/metadata/dcimgui.json.
// Regenerate with the `regen-bindings` CMake target; see CONTRIBUTING.md.

#include "sol_ImGui.h"

namespace sol_ImGui {
namespace {

bool BeginCombo(const std::string& label, const std::string& preview_value, sol::optional<ImGuiComboFlags> flags) {
  ImGuiComboFlags flags_v = static_cast<ImGuiComboFlags>(flags.value_or(0));
  auto ret = ImGui::BeginCombo(label.c_str(), preview_value.c_str(), flags_v);
  return ret;
}

bool BeginDragDropTarget() {
  auto ret = ImGui::BeginDragDropTarget();
  return ret;
}

bool BeginListBox(const std::string& label, sol::optional<ImVec2> size) {
  ImVec2 size_v = size.value_or(ImVec2(0, 0));
  auto ret = ImGui::BeginListBox(label.c_str(), size_v);
  return ret;
}

bool BeginMenuBar() {
  auto ret = ImGui::BeginMenuBar();
  return ret;
}

bool BeginPopupContextVoid(sol::optional<std::string> str_id, sol::optional<ImGuiPopupFlags> popup_flags) {
  std::string str_id_v = str_id.value_or(std::string());
  ImGuiPopupFlags popup_flags_v = static_cast<ImGuiPopupFlags>(popup_flags.value_or(0));
  auto ret = ImGui::BeginPopupContextVoid(str_id_v.c_str(), popup_flags_v);
  return ret;
}

bool BeginTable(const std::string& str_id, int columns, sol::optional<ImGuiTableFlags> flags, sol::optional<ImVec2> outer_size, sol::optional<float> inner_width) {
  ImGuiTableFlags flags_v = static_cast<ImGuiTableFlags>(flags.value_or(0));
  ImVec2 outer_size_v = outer_size.value_or(ImVec2(0.0f, 0.0f));
  float inner_width_v = inner_width.value_or(0.0f);
  auto ret = ImGui::BeginTable(str_id.c_str(), columns, flags_v, outer_size_v, inner_width_v);
  return ret;
}

bool Button(const std::string& label, sol::optional<ImVec2> size) {
  ImVec2 size_v = size.value_or(ImVec2(0, 0));
  auto ret = ImGui::Button(label.c_str(), size_v);
  return ret;
}

std::tuple<bool, bool> Checkbox(const std::string& label, bool v) {
  bool v_v = v;
  auto ret = ImGui::Checkbox(label.c_str(), &v_v);
  return std::make_tuple(v_v, ret);
}

ImU32 ColorConvertFloat4ToU32(const ImVec4& in) {
  auto ret = ImGui::ColorConvertFloat4ToU32(in);
  return ret;
}

ImVec4 ColorConvertU32ToFloat4(ImU32 in) {
  auto ret = ImGui::ColorConvertU32ToFloat4(static_cast<ImU32>(in));
  return ret;
}

void DebugFlashStyleColor(ImGuiCol idx) {
  ImGui::DebugFlashStyleColor(static_cast<ImGuiCol>(idx));
}

std::tuple<float, bool> DragFloat(const std::string& label, float v, sol::optional<float> v_speed, sol::optional<float> v_min, sol::optional<float> v_max, sol::optional<std::string> format, sol::optional<ImGuiSliderFlags> flags) {
  float v_v = v;
  float v_speed_v = v_speed.value_or(1.0f);
  float v_min_v = v_min.value_or(0.0f);
  float v_max_v = v_max.value_or(0.0f);
  std::string format_v = format.value_or(std::string("%.3f"));
  ImGuiSliderFlags flags_v = static_cast<ImGuiSliderFlags>(flags.value_or(0));
  auto ret = ImGui::DragFloat(label.c_str(), &v_v, v_speed_v, v_min_v, v_max_v, format_v.c_str(), flags_v);
  return std::make_tuple(v_v, ret);
}

std::tuple<int, int, bool> DragIntRange2(const std::string& label, int v_current_min, int v_current_max, sol::optional<float> v_speed, sol::optional<int> v_min, sol::optional<int> v_max, sol::optional<std::string> format, sol::optional<std::string> format_max, sol::optional<ImGuiSliderFlags> flags) {
  int v_current_min_v = v_current_min;
  int v_current_max_v = v_current_max;
  float v_speed_v = v_speed.value_or(1.0f);
  int v_min_v = v_min.value_or(0);
  int v_max_v = v_max.value_or(0);
  std::string format_v = format.value_or(std::string("%d"));
  std::string format_max_v = format_max.value_or(std::string());
  ImGuiSliderFlags flags_v = static_cast<ImGuiSliderFlags>(flags.value_or(0));
  auto ret = ImGui::DragIntRange2(label.c_str(), &v_current_min_v, &v_current_max_v, v_speed_v, v_min_v, v_max_v, format_v.c_str(), format_max_v.c_str(), flags_v);
  return std::make_tuple(v_current_min_v, v_current_max_v, ret);
}

void EndChild() {
  ImGui::EndChild();
}

void EndDragDropSource() {
  ImGui::EndDragDropSource();
}

void EndGroup() {
  ImGui::EndGroup();
}

void EndMenu() {
  ImGui::EndMenu();
}

void EndTabBar() {
  ImGui::EndTabBar();
}

void EndTooltip() {
  ImGui::EndTooltip();
}

float GetColumnOffset(sol::optional<int> column_index) {
  int column_index_v = column_index.value_or(-1);
  auto ret = ImGui::GetColumnOffset(column_index_v);
  return ret;
}

ImVec2 GetContentRegionAvail() {
  auto ret = ImGui::GetContentRegionAvail();
  return ret;
}

float GetCursorPosX() {
  auto ret = ImGui::GetCursorPosX();
  return ret;
}

ImVec2 GetCursorStartPos() {
  auto ret = ImGui::GetCursorStartPos();
  return ret;
}

int GetFrameCount() {
  auto ret = ImGui::GetFrameCount();
  return ret;
}

int GetItemClickedCountWithSingleClickDelay(sol::optional<ImGuiMouseButton> mouse_button, sol::optional<float> delay) {
  ImGuiMouseButton mouse_button_v = static_cast<ImGuiMouseButton>(mouse_button.value_or(0));
  float delay_v = delay.value_or(-1.0f);
  auto ret = ImGui::GetItemClickedCountWithSingleClickDelay(mouse_button_v, delay_v);
  return ret;
}

ImVec2 GetItemRectMax() {
  auto ret = ImGui::GetItemRectMax();
  return ret;
}

std::string GetKeyName(ImGuiKey key) {
  const char* ret = ImGui::GetKeyName(static_cast<ImGuiKey>(key));
  return std::string(ret ? ret : "");
}

ImGuiMouseCursor GetMouseCursor() {
  auto ret = ImGui::GetMouseCursor();
  return ret;
}

ImVec2 GetMousePosOnOpeningCurrentPopup() {
  auto ret = ImGui::GetMousePosOnOpeningCurrentPopup();
  return ret;
}

float GetScrollX() {
  auto ret = ImGui::GetScrollX();
  return ret;
}

float GetTextLineHeight() {
  auto ret = ImGui::GetTextLineHeight();
  return ret;
}

float GetTreeNodeToLabelSpacing() {
  auto ret = ImGui::GetTreeNodeToLabelSpacing();
  return ret;
}

ImVec2 GetWindowContentRegionMin() {
  auto ret = ImGui::GetWindowContentRegionMin();
  return ret;
}

ImVec2 GetWindowSize() {
  auto ret = ImGui::GetWindowSize();
  return ret;
}

std::tuple<double, bool> InputDouble(const std::string& label, double v, sol::optional<double> step, sol::optional<double> step_fast, sol::optional<std::string> format, sol::optional<ImGuiInputTextFlags> flags) {
  double v_v = v;
  double step_v = step.value_or(0.0);
  double step_fast_v = step_fast.value_or(0.0);
  std::string format_v = format.value_or(std::string("%.6f"));
  ImGuiInputTextFlags flags_v = static_cast<ImGuiInputTextFlags>(flags.value_or(0));
  auto ret = ImGui::InputDouble(label.c_str(), &v_v, step_v, step_fast_v, format_v.c_str(), flags_v);
  return std::make_tuple(v_v, ret);
}

bool InvisibleButton(const std::string& str_id, const ImVec2& size, sol::optional<ImGuiButtonFlags> flags) {
  ImGuiButtonFlags flags_v = static_cast<ImGuiButtonFlags>(flags.value_or(0));
  auto ret = ImGui::InvisibleButton(str_id.c_str(), size, flags_v);
  return ret;
}

bool IsAnyItemHovered() {
  auto ret = ImGui::IsAnyItemHovered();
  return ret;
}

bool IsItemActive() {
  auto ret = ImGui::IsItemActive();
  return ret;
}

bool IsItemDeactivatedAfterEdit() {
  auto ret = ImGui::IsItemDeactivatedAfterEdit();
  return ret;
}

bool IsItemHovered(sol::optional<ImGuiHoveredFlags> flags) {
  ImGuiHoveredFlags flags_v = static_cast<ImGuiHoveredFlags>(flags.value_or(0));
  auto ret = ImGui::IsItemHovered(flags_v);
  return ret;
}

bool IsItemVisible() {
  auto ret = ImGui::IsItemVisible();
  return ret;
}

bool IsKeyPressed(ImGuiKey key, sol::optional<bool> repeat) {
  bool repeat_v = repeat.value_or(true);
  auto ret = ImGui::IsKeyPressed(static_cast<ImGuiKey>(key), repeat_v);
  return ret;
}

bool IsMouseDoubleClicked(ImGuiMouseButton button) {
  auto ret = ImGui::IsMouseDoubleClicked(static_cast<ImGuiMouseButton>(button));
  return ret;
}

bool IsMouseHoveringRect(const ImVec2& r_min, const ImVec2& r_max, sol::optional<bool> clip) {
  bool clip_v = clip.value_or(true);
  auto ret = ImGui::IsMouseHoveringRect(r_min, r_max, clip_v);
  return ret;
}

bool IsPopupOpen(const std::string& str_id, sol::optional<ImGuiPopupFlags> flags) {
  ImGuiPopupFlags flags_v = static_cast<ImGuiPopupFlags>(flags.value_or(0));
  auto ret = ImGui::IsPopupOpen(str_id.c_str(), flags_v);
  return ret;
}

bool IsWindowFocused(sol::optional<ImGuiFocusedFlags> flags) {
  ImGuiFocusedFlags flags_v = static_cast<ImGuiFocusedFlags>(flags.value_or(0));
  auto ret = ImGui::IsWindowFocused(flags_v);
  return ret;
}

void LoadIniSettingsFromMemory(const std::string& ini_data, sol::optional<size_t> ini_size) {
  size_t ini_size_v = static_cast<size_t>(ini_size.value_or(0));
  ImGui::LoadIniSettingsFromMemory(ini_data.c_str(), ini_size_v);
}

void LogToClipboard(sol::optional<int> auto_open_depth) {
  int auto_open_depth_v = auto_open_depth.value_or(-1);
  ImGui::LogToClipboard(auto_open_depth_v);
}

void NewFrame() {
  ImGui::NewFrame();
}

bool OpenPopupOnItemClick(sol::optional<std::string> str_id, sol::optional<ImGuiPopupFlags> popup_flags) {
  std::string str_id_v = str_id.value_or(std::string());
  ImGuiPopupFlags popup_flags_v = static_cast<ImGuiPopupFlags>(popup_flags.value_or(0));
  auto ret = ImGui::OpenPopupOnItemClick(str_id_v.c_str(), popup_flags_v);
  return ret;
}

void PopFont() {
  ImGui::PopFont();
}

void PopItemWidth() {
  ImGui::PopItemWidth();
}

void PopTabStop() {
  ImGui::PopTabStop();
}

void PushButtonRepeat(bool repeat) {
  ImGui::PushButtonRepeat(repeat);
}

void PushItemWidth(float item_width) {
  ImGui::PushItemWidth(item_width);
}

void PushTabStop(bool tab_stop) {
  ImGui::PushTabStop(tab_stop);
}

void ResetMouseDragDelta(sol::optional<ImGuiMouseButton> button) {
  ImGuiMouseButton button_v = static_cast<ImGuiMouseButton>(button.value_or(0));
  ImGui::ResetMouseDragDelta(button_v);
}

void Separator() {
  ImGui::Separator();
}

void SetColorEditOptions(ImGuiColorEditFlags flags) {
  ImGui::SetColorEditOptions(static_cast<ImGuiColorEditFlags>(flags));
}

void SetCursorPos(const ImVec2& local_pos) {
  ImGui::SetCursorPos(local_pos);
}

void SetCursorScreenPos(const ImVec2& pos) {
  ImGui::SetCursorScreenPos(pos);
}

void SetKeyboardFocusHere(sol::optional<int> offset) {
  int offset_v = offset.value_or(0);
  ImGui::SetKeyboardFocusHere(offset_v);
}

void SetNextFrameWantCaptureKeyboard(bool want_capture_keyboard) {
  ImGui::SetNextFrameWantCaptureKeyboard(want_capture_keyboard);
}

void SetNextItemOpen(bool is_open, sol::optional<ImGuiCond> cond) {
  ImGuiCond cond_v = static_cast<ImGuiCond>(cond.value_or(0));
  ImGui::SetNextItemOpen(is_open, cond_v);
}

void SetNextItemWidth(float item_width) {
  ImGui::SetNextItemWidth(item_width);
}

void SetNextWindowContentSize(const ImVec2& size) {
  ImGui::SetNextWindowContentSize(size);
}

void SetNextWindowScroll(const ImVec2& scroll) {
  ImGui::SetNextWindowScroll(scroll);
}

void SetScrollFromPosY(float local_y, sol::optional<float> center_y_ratio) {
  float center_y_ratio_v = center_y_ratio.value_or(0.5f);
  ImGui::SetScrollFromPosY(local_y, center_y_ratio_v);
}

void SetScrollX(float scroll_x) {
  ImGui::SetScrollX(scroll_x);
}

void SetWindowFontScale(float scale) {
  ImGui::SetWindowFontScale(scale);
}

bool ShowStyleSelector(const std::string& label) {
  auto ret = ImGui::ShowStyleSelector(label.c_str());
  return ret;
}

std::tuple<float, bool> SliderFloat(const std::string& label, float v, float v_min, float v_max, sol::optional<std::string> format, sol::optional<ImGuiSliderFlags> flags) {
  float v_v = v;
  std::string format_v = format.value_or(std::string("%.3f"));
  ImGuiSliderFlags flags_v = static_cast<ImGuiSliderFlags>(flags.value_or(0));
  auto ret = ImGui::SliderFloat(label.c_str(), &v_v, v_min, v_max, format_v.c_str(), flags_v);
  return std::make_tuple(v_v, ret);
}

void Spacing() {
  ImGui::Spacing();
}

int TableGetColumnCount() {
  auto ret = ImGui::TableGetColumnCount();
  return ret;
}

std::string TableGetColumnName(sol::optional<int> column_n) {
  int column_n_v = column_n.value_or(-1);
  const char* ret = ImGui::TableGetColumnName(column_n_v);
  return std::string(ret ? ret : "");
}

void TableHeader(const std::string& label) {
  ImGui::TableHeader(label.c_str());
}

void TableNextRow(sol::optional<ImGuiTableRowFlags> row_flags, sol::optional<float> min_row_height) {
  ImGuiTableRowFlags row_flags_v = static_cast<ImGuiTableRowFlags>(row_flags.value_or(0));
  float min_row_height_v = min_row_height.value_or(0.0f);
  ImGui::TableNextRow(row_flags_v, min_row_height_v);
}

bool TableSetColumnIndex(int column_n) {
  auto ret = ImGui::TableSetColumnIndex(column_n);
  return ret;
}

bool TextLink(const std::string& label) {
  auto ret = ImGui::TextLink(label.c_str());
  return ret;
}

bool TreeNodeGetOpen(ImGuiID storage_id) {
  auto ret = ImGui::TreeNodeGetOpen(static_cast<ImGuiID>(storage_id));
  return ret;
}

std::tuple<float, bool> VSliderFloat(const std::string& label, const ImVec2& size, float v, float v_min, float v_max, sol::optional<std::string> format, sol::optional<ImGuiSliderFlags> flags) {
  float v_v = v;
  std::string format_v = format.value_or(std::string("%.3f"));
  ImGuiSliderFlags flags_v = static_cast<ImGuiSliderFlags>(flags.value_or(0));
  auto ret = ImGui::VSliderFloat(label.c_str(), size, &v_v, v_min, v_max, format_v.c_str(), flags_v);
  return std::make_tuple(v_v, ret);
}

}  // namespace

void InitGenerated_2(sol::table& t) {
  t.set_function("BeginCombo", BeginCombo);
  t.set_function("BeginDragDropTarget", BeginDragDropTarget);
  t.set_function("BeginListBox", BeginListBox);
  t.set_function("BeginMenuBar", BeginMenuBar);
  t.set_function("BeginPopupContextVoid", BeginPopupContextVoid);
  t.set_function("BeginTable", BeginTable);
  t.set_function("Button", Button);
  t.set_function("Checkbox", Checkbox);
  t.set_function("ColorConvertFloat4ToU32", ColorConvertFloat4ToU32);
  t.set_function("ColorConvertU32ToFloat4", ColorConvertU32ToFloat4);
  t.set_function("DebugFlashStyleColor", DebugFlashStyleColor);
  t.set_function("DragFloat", DragFloat);
  t.set_function("DragIntRange2", DragIntRange2);
  t.set_function("EndChild", EndChild);
  t.set_function("EndDragDropSource", EndDragDropSource);
  t.set_function("EndGroup", EndGroup);
  t.set_function("EndMenu", EndMenu);
  t.set_function("EndTabBar", EndTabBar);
  t.set_function("EndTooltip", EndTooltip);
  t.set_function("GetColumnOffset", GetColumnOffset);
  t.set_function("GetContentRegionAvail", GetContentRegionAvail);
  t.set_function("GetCursorPosX", GetCursorPosX);
  t.set_function("GetCursorStartPos", GetCursorStartPos);
  t.set_function("GetFrameCount", GetFrameCount);
  t.set_function("GetItemClickedCountWithSingleClickDelay", GetItemClickedCountWithSingleClickDelay);
  t.set_function("GetItemRectMax", GetItemRectMax);
  t.set_function("GetKeyName", GetKeyName);
  t.set_function("GetMouseCursor", GetMouseCursor);
  t.set_function("GetMousePosOnOpeningCurrentPopup", GetMousePosOnOpeningCurrentPopup);
  t.set_function("GetScrollX", GetScrollX);
  t.set_function("GetTextLineHeight", GetTextLineHeight);
  t.set_function("GetTreeNodeToLabelSpacing", GetTreeNodeToLabelSpacing);
  t.set_function("GetWindowContentRegionMin", GetWindowContentRegionMin);
  t.set_function("GetWindowSize", GetWindowSize);
  t.set_function("InputDouble", InputDouble);
  t.set_function("InvisibleButton", InvisibleButton);
  t.set_function("IsAnyItemHovered", IsAnyItemHovered);
  t.set_function("IsItemActive", IsItemActive);
  t.set_function("IsItemDeactivatedAfterEdit", IsItemDeactivatedAfterEdit);
  t.set_function("IsItemHovered", IsItemHovered);
  t.set_function("IsItemVisible", IsItemVisible);
  t.set_function("IsKeyPressed", IsKeyPressed);
  t.set_function("IsMouseDoubleClicked", IsMouseDoubleClicked);
  t.set_function("IsMouseHoveringRect", IsMouseHoveringRect);
  t.set_function("IsPopupOpen", IsPopupOpen);
  t.set_function("IsWindowFocused", IsWindowFocused);
  t.set_function("LoadIniSettingsFromMemory", LoadIniSettingsFromMemory);
  t.set_function("LogToClipboard", LogToClipboard);
  t.set_function("NewFrame", NewFrame);
  t.set_function("OpenPopupOnItemClick", OpenPopupOnItemClick);
  t.set_function("PopFont", PopFont);
  t.set_function("PopItemWidth", PopItemWidth);
  t.set_function("PopTabStop", PopTabStop);
  t.set_function("PushButtonRepeat", PushButtonRepeat);
  t.set_function("PushItemWidth", PushItemWidth);
  t.set_function("PushTabStop", PushTabStop);
  t.set_function("ResetMouseDragDelta", ResetMouseDragDelta);
  t.set_function("Separator", Separator);
  t.set_function("SetColorEditOptions", SetColorEditOptions);
  t.set_function("SetCursorPos", SetCursorPos);
  t.set_function("SetCursorScreenPos", SetCursorScreenPos);
  t.set_function("SetKeyboardFocusHere", SetKeyboardFocusHere);
  t.set_function("SetNextFrameWantCaptureKeyboard", SetNextFrameWantCaptureKeyboard);
  t.set_function("SetNextItemOpen", SetNextItemOpen);
  t.set_function("SetNextItemWidth", SetNextItemWidth);
  t.set_function("SetNextWindowContentSize", SetNextWindowContentSize);
  t.set_function("SetNextWindowScroll", SetNextWindowScroll);
  t.set_function("SetScrollFromPosY", SetScrollFromPosY);
  t.set_function("SetScrollX", SetScrollX);
  t.set_function("SetWindowFontScale", SetWindowFontScale);
  t.set_function("ShowStyleSelector", ShowStyleSelector);
  t.set_function("SliderFloat", SliderFloat);
  t.set_function("Spacing", Spacing);
  t.set_function("TableGetColumnCount", TableGetColumnCount);
  t.set_function("TableGetColumnName", TableGetColumnName);
  t.set_function("TableHeader", TableHeader);
  t.set_function("TableNextRow", TableNextRow);
  t.set_function("TableSetColumnIndex", TableSetColumnIndex);
  t.set_function("TextLink", TextLink);
  t.set_function("TreeNodeGetOpen", TreeNodeGetOpen);
  t.set_function("VSliderFloat", VSliderFloat);
}
}  // namespace sol_ImGui
