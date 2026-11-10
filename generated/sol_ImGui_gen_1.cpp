// GENERATED FILE -- DO NOT EDIT BY HAND.
// Produced by codegen/generate.py from codegen/metadata/dcimgui.json.
// Regenerate with the `regen-bindings` CMake target; see CONTRIBUTING.md.

#include "sol_ImGui.h"

namespace sol_ImGui {
namespace {

bool ArrowButton(const std::string& str_id, ImGuiDir dir) {
  auto ret = ImGui::ArrowButton(str_id.c_str(), static_cast<ImGuiDir>(dir));
  return ret;
}

bool BeginDragDropSource(sol::optional<ImGuiDragDropFlags> flags) {
  ImGuiDragDropFlags flags_v = static_cast<ImGuiDragDropFlags>(flags.value_or(0));
  auto ret = ImGui::BeginDragDropSource(flags_v);
  return ret;
}

bool BeginItemTooltip() {
  auto ret = ImGui::BeginItemTooltip();
  return ret;
}

bool BeginMenu(const std::string& label, sol::optional<bool> enabled) {
  bool enabled_v = enabled.value_or(true);
  auto ret = ImGui::BeginMenu(label.c_str(), enabled_v);
  return ret;
}

bool BeginPopupContextItem(sol::optional<std::string> str_id, sol::optional<ImGuiPopupFlags> popup_flags) {
  std::string str_id_v = str_id.value_or(std::string());
  ImGuiPopupFlags popup_flags_v = static_cast<ImGuiPopupFlags>(popup_flags.value_or(0));
  auto ret = ImGui::BeginPopupContextItem(str_id_v.c_str(), popup_flags_v);
  return ret;
}

bool BeginTabBar(const std::string& str_id, sol::optional<ImGuiTabBarFlags> flags) {
  ImGuiTabBarFlags flags_v = static_cast<ImGuiTabBarFlags>(flags.value_or(0));
  auto ret = ImGui::BeginTabBar(str_id.c_str(), flags_v);
  return ret;
}

void Bullet() {
  ImGui::Bullet();
}

ImVec2 CalcTextSize(const std::string& text, sol::optional<std::string> text_end, sol::optional<bool> hide_text_after_double_hash, sol::optional<float> wrap_width) {
  std::string text_end_v = text_end.value_or(std::string());
  bool hide_text_after_double_hash_v = hide_text_after_double_hash.value_or(false);
  float wrap_width_v = wrap_width.value_or(-1.0f);
  auto ret = ImGui::CalcTextSize(text.c_str(), text_end_v.c_str(), hide_text_after_double_hash_v, wrap_width_v);
  return ret;
}

bool ColorButton(const std::string& desc_id, const ImVec4& col, sol::optional<ImGuiColorEditFlags> flags, sol::optional<ImVec2> size) {
  ImGuiColorEditFlags flags_v = static_cast<ImGuiColorEditFlags>(flags.value_or(0));
  ImVec2 size_v = size.value_or(ImVec2(0, 0));
  auto ret = ImGui::ColorButton(desc_id.c_str(), col, flags_v, size_v);
  return ret;
}

std::tuple<float, float, float> ColorConvertRGBtoHSV(float r, float g, float b, float out_h, float out_s, float out_v) {
  float out_h_v = out_h;
  float out_s_v = out_s;
  float out_v_v = out_v;
  ImGui::ColorConvertRGBtoHSV(r, g, b, out_h_v, out_s_v, out_v_v);
  return std::make_tuple(out_h_v, out_s_v, out_v_v);
}

bool DebugCheckVersionAndDataLayout(const std::string& version_str, size_t sz_io, size_t sz_style, size_t sz_vec2, size_t sz_vec4, size_t sz_drawvert, size_t sz_drawidx) {
  auto ret = ImGui::DebugCheckVersionAndDataLayout(version_str.c_str(), static_cast<size_t>(sz_io), static_cast<size_t>(sz_style), static_cast<size_t>(sz_vec2), static_cast<size_t>(sz_vec4), static_cast<size_t>(sz_drawvert), static_cast<size_t>(sz_drawidx));
  return ret;
}

void DebugTextEncoding(const std::string& text) {
  ImGui::DebugTextEncoding(text.c_str());
}

std::tuple<float, float, bool> DragFloatRange2(const std::string& label, float v_current_min, float v_current_max, sol::optional<float> v_speed, sol::optional<float> v_min, sol::optional<float> v_max, sol::optional<std::string> format, sol::optional<std::string> format_max, sol::optional<ImGuiSliderFlags> flags) {
  float v_current_min_v = v_current_min;
  float v_current_max_v = v_current_max;
  float v_speed_v = v_speed.value_or(1.0f);
  float v_min_v = v_min.value_or(0.0f);
  float v_max_v = v_max.value_or(0.0f);
  std::string format_v = format.value_or(std::string("%.3f"));
  std::string format_max_v = format_max.value_or(std::string());
  ImGuiSliderFlags flags_v = static_cast<ImGuiSliderFlags>(flags.value_or(0));
  auto ret = ImGui::DragFloatRange2(label.c_str(), &v_current_min_v, &v_current_max_v, v_speed_v, v_min_v, v_max_v, format_v.c_str(), format_max_v.c_str(), flags_v);
  return std::make_tuple(v_current_min_v, v_current_max_v, ret);
}

void Dummy(const ImVec2& size) {
  ImGui::Dummy(size);
}

void EndCombo() {
  ImGui::EndCombo();
}

void EndDragDropTarget() {
  ImGui::EndDragDropTarget();
}

void EndListBox() {
  ImGui::EndListBox();
}

void EndMenuBar() {
  ImGui::EndMenuBar();
}

void EndTabItem() {
  ImGui::EndTabItem();
}

std::string GetClipboardText() {
  const char* ret = ImGui::GetClipboardText();
  return std::string(ret ? ret : "");
}

float GetColumnWidth(sol::optional<int> column_index) {
  int column_index_v = column_index.value_or(-1);
  auto ret = ImGui::GetColumnWidth(column_index_v);
  return ret;
}

ImVec2 GetContentRegionMax() {
  auto ret = ImGui::GetContentRegionMax();
  return ret;
}

float GetCursorPosY() {
  auto ret = ImGui::GetCursorPosY();
  return ret;
}

float GetFontSize() {
  auto ret = ImGui::GetFontSize();
  return ret;
}

float GetFrameHeight() {
  auto ret = ImGui::GetFrameHeight();
  return ret;
}

ImGuiItemFlags GetItemFlags() {
  auto ret = ImGui::GetItemFlags();
  return ret;
}

ImVec2 GetItemRectMin() {
  auto ret = ImGui::GetItemRectMin();
  return ret;
}

int GetKeyPressedAmount(ImGuiKey key, float repeat_delay, float rate) {
  auto ret = ImGui::GetKeyPressedAmount(static_cast<ImGuiKey>(key), repeat_delay, rate);
  return ret;
}

ImVec2 GetMouseDragDelta(sol::optional<ImGuiMouseButton> button, sol::optional<float> lock_threshold) {
  ImGuiMouseButton button_v = static_cast<ImGuiMouseButton>(button.value_or(0));
  float lock_threshold_v = lock_threshold.value_or(-1.0f);
  auto ret = ImGui::GetMouseDragDelta(button_v, lock_threshold_v);
  return ret;
}

float GetScrollMaxX() {
  auto ret = ImGui::GetScrollMaxX();
  return ret;
}

float GetScrollY() {
  auto ret = ImGui::GetScrollY();
  return ret;
}

float GetTextLineHeightWithSpacing() {
  auto ret = ImGui::GetTextLineHeightWithSpacing();
  return ret;
}

std::string GetVersion() {
  const char* ret = ImGui::GetVersion();
  return std::string(ret ? ret : "");
}

ImGuiID GetWindowDockID() {
  auto ret = ImGui::GetWindowDockID();
  return ret;
}

ImVec2 GetWindowPos() {
  auto ret = ImGui::GetWindowPos();
  return ret;
}

void Indent(sol::optional<float> indent_w) {
  float indent_w_v = indent_w.value_or(0.0f);
  ImGui::Indent(indent_w_v);
}

std::tuple<int, bool> InputInt(const std::string& label, int v, sol::optional<int> step, sol::optional<int> step_fast, sol::optional<ImGuiInputTextFlags> flags) {
  int v_v = v;
  int step_v = step.value_or(1);
  int step_fast_v = step_fast.value_or(100);
  ImGuiInputTextFlags flags_v = static_cast<ImGuiInputTextFlags>(flags.value_or(0));
  auto ret = ImGui::InputInt(label.c_str(), &v_v, step_v, step_fast_v, flags_v);
  return std::make_tuple(v_v, ret);
}

bool IsAnyItemFocused() {
  auto ret = ImGui::IsAnyItemFocused();
  return ret;
}

bool IsItemActivated() {
  auto ret = ImGui::IsItemActivated();
  return ret;
}

bool IsItemDeactivated() {
  auto ret = ImGui::IsItemDeactivated();
  return ret;
}

bool IsItemFocused() {
  auto ret = ImGui::IsItemFocused();
  return ret;
}

bool IsItemToggledSelection() {
  auto ret = ImGui::IsItemToggledSelection();
  return ret;
}

bool IsKeyDown(ImGuiKey key) {
  auto ret = ImGui::IsKeyDown(static_cast<ImGuiKey>(key));
  return ret;
}

bool IsMouseClicked(ImGuiMouseButton button, sol::optional<bool> repeat) {
  bool repeat_v = repeat.value_or(false);
  auto ret = ImGui::IsMouseClicked(static_cast<ImGuiMouseButton>(button), repeat_v);
  return ret;
}

bool IsMouseDragging(ImGuiMouseButton button, sol::optional<float> lock_threshold) {
  float lock_threshold_v = lock_threshold.value_or(-1.0f);
  auto ret = ImGui::IsMouseDragging(static_cast<ImGuiMouseButton>(button), lock_threshold_v);
  return ret;
}

bool IsMouseReleasedWithDelay(ImGuiMouseButton button, sol::optional<float> delay) {
  float delay_v = delay.value_or(-1.f);
  auto ret = ImGui::IsMouseReleasedWithDelay(static_cast<ImGuiMouseButton>(button), delay_v);
  return ret;
}

bool IsWindowCollapsed() {
  auto ret = ImGui::IsWindowCollapsed();
  return ret;
}

bool IsWindowHovered(sol::optional<ImGuiHoveredFlags> flags) {
  ImGuiHoveredFlags flags_v = static_cast<ImGuiHoveredFlags>(flags.value_or(0));
  auto ret = ImGui::IsWindowHovered(flags_v);
  return ret;
}

void LogButtons() {
  ImGui::LogButtons();
}

void LogToFile(sol::optional<int> auto_open_depth, sol::optional<std::string> filename) {
  int auto_open_depth_v = auto_open_depth.value_or(-1);
  std::string filename_v = filename.value_or(std::string());
  ImGui::LogToFile(auto_open_depth_v, filename_v.c_str());
}

void NewLine() {
  ImGui::NewLine();
}

void PopButtonRepeat() {
  ImGui::PopButtonRepeat();
}

void PopID() {
  ImGui::PopID();
}

void PopStyleColor(sol::optional<int> count) {
  int count_v = count.value_or(1);
  ImGui::PopStyleColor(count_v);
}

void PopTextWrapPos() {
  ImGui::PopTextWrapPos();
}

void PushClipRect(const ImVec2& clip_rect_min, const ImVec2& clip_rect_max, bool intersect_with_current_clip_rect) {
  ImGui::PushClipRect(clip_rect_min, clip_rect_max, intersect_with_current_clip_rect);
}

void PushStyleVarX(ImGuiStyleVar idx, float val_x) {
  ImGui::PushStyleVarX(static_cast<ImGuiStyleVar>(idx), val_x);
}

void PushTextWrapPos(sol::optional<float> wrap_local_pos_x) {
  float wrap_local_pos_x_v = wrap_local_pos_x.value_or(0.0f);
  ImGui::PushTextWrapPos(wrap_local_pos_x_v);
}

void SameLine(sol::optional<float> offset_from_start_x, sol::optional<float> spacing) {
  float offset_from_start_x_v = offset_from_start_x.value_or(0.0f);
  float spacing_v = spacing.value_or(-1.0f);
  ImGui::SameLine(offset_from_start_x_v, spacing_v);
}

void SeparatorText(const std::string& label) {
  ImGui::SeparatorText(label.c_str());
}

void SetColumnOffset(int column_index, float offset_x) {
  ImGui::SetColumnOffset(column_index, offset_x);
}

void SetCursorPosX(float local_x) {
  ImGui::SetCursorPosX(local_x);
}

void SetItemDefaultFocus() {
  ImGui::SetItemDefaultFocus();
}

void SetMouseCursor(ImGuiMouseCursor cursor_type) {
  ImGui::SetMouseCursor(static_cast<ImGuiMouseCursor>(cursor_type));
}

void SetNextFrameWantCaptureMouse(bool want_capture_mouse) {
  ImGui::SetNextFrameWantCaptureMouse(want_capture_mouse);
}

void SetNextItemShortcut(ImGuiKeyChord key_chord, sol::optional<ImGuiInputFlags> flags) {
  ImGuiInputFlags flags_v = static_cast<ImGuiInputFlags>(flags.value_or(0));
  ImGui::SetNextItemShortcut(static_cast<ImGuiKeyChord>(key_chord), flags_v);
}

void SetNextWindowBgAlpha(float alpha) {
  ImGui::SetNextWindowBgAlpha(alpha);
}

void SetNextWindowDockID(ImGuiID dock_id, sol::optional<ImGuiCond> cond) {
  ImGuiCond cond_v = static_cast<ImGuiCond>(cond.value_or(0));
  ImGui::SetNextWindowDockID(static_cast<ImGuiID>(dock_id), cond_v);
}

void SetNextWindowScroll(const ImVec2& scroll) {
  ImGui::SetNextWindowScroll(scroll);
}

void SetScrollFromPosX(float local_x, sol::optional<float> center_x_ratio) {
  float center_x_ratio_v = center_x_ratio.value_or(0.5f);
  ImGui::SetScrollFromPosX(local_x, center_x_ratio_v);
}

void SetScrollHereY(sol::optional<float> center_y_ratio) {
  float center_y_ratio_v = center_y_ratio.value_or(0.5f);
  ImGui::SetScrollHereY(center_y_ratio_v);
}

void SetTabItemClosed(const std::string& tab_or_docked_window_label) {
  ImGui::SetTabItemClosed(tab_or_docked_window_label.c_str());
}

void ShowFontSelector(const std::string& label) {
  ImGui::ShowFontSelector(label.c_str());
}

std::tuple<float, bool> SliderAngle(const std::string& label, float v_rad, sol::optional<float> v_degrees_min, sol::optional<float> v_degrees_max, sol::optional<std::string> format, sol::optional<ImGuiSliderFlags> flags) {
  float v_rad_v = v_rad;
  float v_degrees_min_v = v_degrees_min.value_or(-360.0f);
  float v_degrees_max_v = v_degrees_max.value_or(+360.0f);
  std::string format_v = format.value_or(std::string("%.0f deg"));
  ImGuiSliderFlags flags_v = static_cast<ImGuiSliderFlags>(flags.value_or(0));
  auto ret = ImGui::SliderAngle(label.c_str(), &v_rad_v, v_degrees_min_v, v_degrees_max_v, format_v.c_str(), flags_v);
  return std::make_tuple(v_rad_v, ret);
}

bool SmallButton(const std::string& label) {
  auto ret = ImGui::SmallButton(label.c_str());
  return ret;
}

void TableAngledHeadersRow() {
  ImGui::TableAngledHeadersRow();
}

int TableGetColumnIndex() {
  auto ret = ImGui::TableGetColumnIndex();
  return ret;
}

int TableGetRowIndex() {
  auto ret = ImGui::TableGetRowIndex();
  return ret;
}

bool TableNextColumn() {
  auto ret = ImGui::TableNextColumn();
  return ret;
}

void TableSetColumnEnabled(int column_n, bool v) {
  ImGui::TableSetColumnEnabled(column_n, v);
}

void TableSetupScrollFreeze(int cols, int rows) {
  ImGui::TableSetupScrollFreeze(cols, rows);
}

void TextUnformatted(const std::string& text, sol::optional<std::string> text_end) {
  std::string text_end_v = text_end.value_or(std::string());
  ImGui::TextUnformatted(text.c_str(), text_end_v.c_str());
}

void Unindent(sol::optional<float> indent_w) {
  float indent_w_v = indent_w.value_or(0.0f);
  ImGui::Unindent(indent_w_v);
}

std::tuple<int, bool> VSliderInt(const std::string& label, const ImVec2& size, int v, int v_min, int v_max, sol::optional<std::string> format, sol::optional<ImGuiSliderFlags> flags) {
  int v_v = v;
  std::string format_v = format.value_or(std::string("%d"));
  ImGuiSliderFlags flags_v = static_cast<ImGuiSliderFlags>(flags.value_or(0));
  auto ret = ImGui::VSliderInt(label.c_str(), size, &v_v, v_min, v_max, format_v.c_str(), flags_v);
  return std::make_tuple(v_v, ret);
}

}  // namespace

void InitGenerated_1(sol::table& t) {
  t.set_function("ArrowButton", ArrowButton);
  t.set_function("BeginDragDropSource", BeginDragDropSource);
  t.set_function("BeginItemTooltip", BeginItemTooltip);
  t.set_function("BeginMenu", BeginMenu);
  t.set_function("BeginPopupContextItem", BeginPopupContextItem);
  t.set_function("BeginTabBar", BeginTabBar);
  t.set_function("Bullet", Bullet);
  t.set_function("CalcTextSize", CalcTextSize);
  t.set_function("ColorButton", ColorButton);
  t.set_function("ColorConvertRGBtoHSV", ColorConvertRGBtoHSV);
  t.set_function("DebugCheckVersionAndDataLayout", DebugCheckVersionAndDataLayout);
  t.set_function("DebugTextEncoding", DebugTextEncoding);
  t.set_function("DragFloatRange2", DragFloatRange2);
  t.set_function("Dummy", Dummy);
  t.set_function("EndCombo", EndCombo);
  t.set_function("EndDragDropTarget", EndDragDropTarget);
  t.set_function("EndListBox", EndListBox);
  t.set_function("EndMenuBar", EndMenuBar);
  t.set_function("EndTabItem", EndTabItem);
  t.set_function("GetClipboardText", GetClipboardText);
  t.set_function("GetColumnWidth", GetColumnWidth);
  t.set_function("GetContentRegionMax", GetContentRegionMax);
  t.set_function("GetCursorPosY", GetCursorPosY);
  t.set_function("GetFontSize", GetFontSize);
  t.set_function("GetFrameHeight", GetFrameHeight);
  t.set_function("GetItemFlags", GetItemFlags);
  t.set_function("GetItemRectMin", GetItemRectMin);
  t.set_function("GetKeyPressedAmount", GetKeyPressedAmount);
  t.set_function("GetMouseDragDelta", GetMouseDragDelta);
  t.set_function("GetScrollMaxX", GetScrollMaxX);
  t.set_function("GetScrollY", GetScrollY);
  t.set_function("GetTextLineHeightWithSpacing", GetTextLineHeightWithSpacing);
  t.set_function("GetVersion", GetVersion);
  t.set_function("GetWindowDockID", GetWindowDockID);
  t.set_function("GetWindowPos", GetWindowPos);
  t.set_function("Indent", Indent);
  t.set_function("InputInt", InputInt);
  t.set_function("IsAnyItemFocused", IsAnyItemFocused);
  t.set_function("IsItemActivated", IsItemActivated);
  t.set_function("IsItemDeactivated", IsItemDeactivated);
  t.set_function("IsItemFocused", IsItemFocused);
  t.set_function("IsItemToggledSelection", IsItemToggledSelection);
  t.set_function("IsKeyDown", IsKeyDown);
  t.set_function("IsMouseClicked", IsMouseClicked);
  t.set_function("IsMouseDragging", IsMouseDragging);
  t.set_function("IsMouseReleasedWithDelay", IsMouseReleasedWithDelay);
  t.set_function("IsWindowCollapsed", IsWindowCollapsed);
  t.set_function("IsWindowHovered", IsWindowHovered);
  t.set_function("LogButtons", LogButtons);
  t.set_function("LogToFile", LogToFile);
  t.set_function("NewLine", NewLine);
  t.set_function("PopButtonRepeat", PopButtonRepeat);
  t.set_function("PopID", PopID);
  t.set_function("PopStyleColor", PopStyleColor);
  t.set_function("PopTextWrapPos", PopTextWrapPos);
  t.set_function("PushClipRect", PushClipRect);
  t.set_function("PushStyleVarX", PushStyleVarX);
  t.set_function("PushTextWrapPos", PushTextWrapPos);
  t.set_function("SameLine", SameLine);
  t.set_function("SeparatorText", SeparatorText);
  t.set_function("SetColumnOffset", SetColumnOffset);
  t.set_function("SetCursorPosX", SetCursorPosX);
  t.set_function("SetItemDefaultFocus", SetItemDefaultFocus);
  t.set_function("SetMouseCursor", SetMouseCursor);
  t.set_function("SetNextFrameWantCaptureMouse", SetNextFrameWantCaptureMouse);
  t.set_function("SetNextItemShortcut", SetNextItemShortcut);
  t.set_function("SetNextWindowBgAlpha", SetNextWindowBgAlpha);
  t.set_function("SetNextWindowDockID", SetNextWindowDockID);
  t.set_function("SetNextWindowScroll", SetNextWindowScroll);
  t.set_function("SetScrollFromPosX", SetScrollFromPosX);
  t.set_function("SetScrollHereY", SetScrollHereY);
  t.set_function("SetTabItemClosed", SetTabItemClosed);
  t.set_function("ShowFontSelector", ShowFontSelector);
  t.set_function("SliderAngle", SliderAngle);
  t.set_function("SmallButton", SmallButton);
  t.set_function("TableAngledHeadersRow", TableAngledHeadersRow);
  t.set_function("TableGetColumnIndex", TableGetColumnIndex);
  t.set_function("TableGetRowIndex", TableGetRowIndex);
  t.set_function("TableNextColumn", TableNextColumn);
  t.set_function("TableSetColumnEnabled", TableSetColumnEnabled);
  t.set_function("TableSetupScrollFreeze", TableSetupScrollFreeze);
  t.set_function("TextUnformatted", TextUnformatted);
  t.set_function("Unindent", Unindent);
  t.set_function("VSliderInt", VSliderInt);
}
}  // namespace sol_ImGui
